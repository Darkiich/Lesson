import sqlite3
import asyncio
from concurrent.futures import ThreadPoolExecutor

class DatabaseHelper:

    def __init__(self, db_path='games.db', executor=None):
        self.db_path = db_path
        self.executor = executor or ThreadPoolExecutor(max_workers=2)
        self._table_created = False

    async def _get_connection(self):
        """Получить подключение к БД (создаёт новое для каждого вызова)"""
        conn = await asyncio.get_event_loop().run_in_executor(
            self.executor, 
            lambda: sqlite3.connect(self.db_path)
        )
        return conn

    async def _ensure_table_exists(self):
        """Убедиться, что таблица существует (создаёт при первом вызове)"""
        if not self._table_created:
            await self.create_table()
            self._table_created = True

    async def execute(self, sql, params=None):
        """Выполнить SQL команду без результата"""
        conn = await self._get_connection()
        
        def _execute():
            cursor = conn.cursor()
            if params:
                cursor.execute(sql, params)
            else:
                cursor.execute(sql)
            conn.commit()
            conn.close()
            return cursor
        
        return await asyncio.get_event_loop().run_in_executor(self.executor, _execute)

    async def create_table(self):
        """Создать таблицу игр"""
        sql = '''
            CREATE TABLE IF NOT EXISTS games (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                title TEXT NOT NULL,
                link_product TEXT,
                now_price TEXT,
                now_discount TEXT,
                original_price TEXT,
                date_release TEXT,
                developers TEXT,
                reviews TEXT
            )
        '''
        await self.execute(sql)

    async def insert_info(self, title, link_product, now_price, now_discount, 
                          original_price, date_release, developers, reviews):
        """Вставить информацию об игре"""
        await self._ensure_table_exists()
        
        def _insert_info():
            conn = sqlite3.connect(self.db_path)
            sql = '''
                INSERT INTO games (
                    title, link_product, now_price, now_discount, original_price, 
                    date_release, developers, reviews
                ) VALUES (?, ?, ?, ?, ?, ?, ?, ?)'''
            conn.execute(sql, (title, link_product, now_price, now_discount, 
                                 original_price, date_release, developers, reviews))
            conn.commit()
            conn.close()
        
        await asyncio.get_event_loop().run_in_executor(self.executor, _insert_info)

    async def insert_many(self, games_list):
        """Массовая вставка игр"""
        await self._ensure_table_exists()
        
        def _insert_many():
            conn = sqlite3.connect(self.db_path)
            cursor = conn.cursor()
            cursor.executemany('''
                INSERT INTO games (
                    title, link_product, now_price, now_discount, original_price,
                    date_release, developers, reviews
                ) VALUES (?, ?, ?, ?, ?, ?, ?, ?)''',
                games_list)
            conn.commit()
            conn.close()
        
        await asyncio.get_event_loop().run_in_executor(self.executor, _insert_many)

    async def get_all_games(self):
        """Получить все игры"""
        
        def _get_all():
            conn = sqlite3.connect(self.db_path)
            cursor = conn.cursor()
            cursor.execute('SELECT * FROM games')
            result = cursor.fetchall()
            conn.close()
            return result
        
        return await asyncio.get_event_loop().run_in_executor(self.executor, _get_all)

    async def get_games_by_price(self, max_price):
        """Получить игры по цене"""
        
        def _get_by_price():
            conn = sqlite3.connect(self.db_path)
            cursor = conn.cursor()
            cursor.execute('SELECT * FROM games WHERE now_price LIKE ?', (f'%{max_price}%',))
            result = cursor.fetchall()
            conn.close()
            return result
        
        return await asyncio.get_event_loop().run_in_executor(self.executor, _get_by_price)
