# Декораторы функций - это простой способ модификации поведения любой функции без внесения изменения в ее код.
# Декораторы позволяют вам выполнить произвольный код до/после/вместо вызова функции, модифицируя ее входные аргументы, результат выполнения и добавляя различные сайд-эффекты.
from functools import wraps


# Пример обычного декоратора
def decorator(func):
    @wraps(func) # Эта функция копирует всю служебную метаинформацию о декорируемой функции в функцию-декоратор (название функции, докстринги, список входящих аргументов, их типы и тд).
    def wrapper(*args, **kwargs):
        result = func(*args, **kwargs)
        print(f"Результат декоратора 'decorator' - {result}")
    return wrapper

# Пример декоратора с параметрами
def decorator_wrapper(arg1, arg2):
    def my_decorator(func): # объявляем декоратор
        @wraps(func) # Эта функция копирует всю служебную метаинформацию о декорируемой функции в функцию-декоратор (название функции, докстринги, список входящих аргументов, их типы и тд).
        def wrapper(*args, **kwargs):
            result = func(*args, **kwargs)
            print(f"Результат функции возвращающая декоратор 'decorator_wrapper' с параметрами {arg1}, {arg2} - {result}")
        return wrapper
    return my_decorator # возвращаем декоратор

@decorator
def say_hello(arg: str) -> str:
    return arg

@decorator_wrapper(1, 5)
def say_hello_v2(arg: str) -> str:
    return arg


say_hello("hi") # hi
say_hello_v2("hi v2") # hi v2