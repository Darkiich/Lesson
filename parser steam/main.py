import requests
from bs4 import BeautifulSoup
import asyncio
from databaseHelper import DatabaseHelper

def parsing_steam():
    payload = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/130.0.0.0 Safari/537.36',
        'Accept-Language': 'ru-RU,ru;q=0.9,en-US;q=0.8,en;q=0.7'
    }

    max_games = 60000
    counter = 0
    page = 1
    games_batch = []

    db = DatabaseHelper('games.db')

    while counter < max_games:
        url = f"https://store.steampowered.com/search/?supportedlang=russian&ndl=1&page={page}"
        
        try:
            response = requests.get(url, headers=payload, timeout=15)
            response.raise_for_status()
        except requests.RequestException as e:
            print(f"Ошибка при загрузке страницы {page}: {e}")
            break

        soup = BeautifulSoup(response.text, 'html.parser')
        game_info = soup.find_all('a', class_='search_result_row')

        for game in game_info:

            title = game.find('span', class_='title').text.strip()
            link_product = game.get('href')
            now_price_elem = game.find('div', class_='discount_final_price')
            now_price = now_price_elem.text.strip() if now_price_elem else "Бесплатно"

            have_discount = game.find('div', class_='discount_pct')
            original_price_not_discount = game.find('div', class_='discount_original_price')

            now_discount = have_discount.text.strip() if have_discount else "-0%"
            original_price = original_price_not_discount.text.strip() if original_price_not_discount else now_price

            date_release = game.find('div', class_='search_released').text.strip() or "Не указана"

            # if link_product:
            #     try:
            #         resp2 = requests.get(link_product, headers=payload, timeout=10)
            #         soup2 = BeautifulSoup(resp2.text, 'html.parser')

            #         review = soup2.find('span', class_='game_review_summary')
            #         developer = soup2.find('div', id='developers_list')
                    
            #         reviews = review.text.strip() if review else "Нет отзывов"
            #         developers = developer.text.strip() if developer else "Неизвестно"
            #     except requests.RequestException as e:
            #         print(f"Ошибка отправки запроса к странице игры {title}: {e}")

            counter += 1
            print(f"{counter}."
                f" {title}"
                f"\nСсылка: {link_product}"
                f"\nТекущая цена: {now_price}"
                f"\nСкидка: {now_discount}"
                f"\nЦена без скидки: {original_price}"
                f"\nДата выхода: {date_release}\n"
                # f"\nРазработчик: {developers}"
                # f"\nОтзывы: {reviews}\n"
            )

            games_batch.append((title, link_product, now_price, now_discount, original_price, date_release, "Неизвестно", "Нет отзывов"))

            if len(games_batch) >= 10:
                asyncio.run(db.insert_many(games_batch))
                print(f"Вставлено {len(games_batch)} игр в БД\n")
                games_batch = []

        page += 1

parsing_steam()
