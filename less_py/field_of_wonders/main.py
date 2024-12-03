import random

guessed = []

slova = ['python', 'программист', 'компьютер', 'игра', 'разработка']
choice_word = random.choice(slova)


print("Добро пожаловать в игру 'Поле Чудес'!")

while True:
    otvet = ''
    
    for i in choice_word:
        if i in guessed:
            otvet += i
        else:
            otvet += '_'
    print(f"Слово: {otvet}")
        
    quest = input("Введите букву: ").lower()
        
    if len(quest) != 1 or not quest.isalpha():
        print("Пожалуйста, вводите только одну букву.")
        continue
        
    if quest in guessed:
        print("Эту букву вы уже угадывали.")
        continue
        
    if quest in choice_word:
        guessed.append(quest)
        print(f"Отлично! Буква '{quest}' есть в слове.")
    else:
        print(f"Увы, буквы '{quest}' нет в слове.")

    for i in choice_word:
        if i in guessed:
            print(f"Поздравляю! Вы угадали слово '{choice_word}'.")
            break
        else:
            continue