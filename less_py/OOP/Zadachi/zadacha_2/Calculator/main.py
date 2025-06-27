class Calculator:
    def summa(self, a, b):
        print(f"{a} + {b} = {a + b}")
        pass

    def subtraction(self, a, b):
        print(f'{a} - {b} = {a - b}')
        pass

    def multiplication(self, a, b):
        print(f'{a} * {b} = {a * b}')
        pass

    def division(self, a, b):
        print(f'{a} / {b} = {a / b}')
        pass

    def step(self, a, b):
        print(f'{a} ^ {b} = {a ** b}')
        pass

    def cel(self, a, b):
        print(f'{a} // {b} = {a // b}')
        pass

    def pro(self, a, b):
        print(f'{a} % {b} = {a % b}')
        pass

    def factor(self, a):
        i = 1
        for i in range(2, a):
            a *= i
            print(a)
            pass

    def type_operation(self):
        print()
        print("Типы операций")
        print("1. +")
        print("2. -")
        print("3. *")
        print("4. /")
        print("5. **(степень)")
        print("6. //(целочисленное деление)")
        print("7. %")
        pass

    def main_procces(self, a, b):
        sign = input("Выберите число действия: ")
        if sign == "1":
            self.summa(a, b)
        elif sign == "2":
            self.subtraction(a, b)
        elif sign == "3":
            self.multiplication(a, b)
        elif sign == "4":
            if b == 0:
                print("На ноль делить нельзя")
            else:
                self.division(a, b)
        elif sign == "5":
            self.step(a, b)
        elif sign == "6":
            self.cel(a, b)
        elif sign == "7":
            self.pro(a, b)
        else:
            print("Ошибка")
        pass

    def discr_ur(self, a, b, c):
        d = b ** 2 - 4 * a * c
        print(f'D = {d}')
        if d > 0:
            x_1 = int((-b + d ** 0.5) / (2 * a))
            x_2 = int((-b - d ** 0.5) / (2 * a))
            print(f'x1 = {x_1} \nx2 = {x_2}')
        elif d == 0:
            x_0 = -b / (2 * a)
            print(f'x = {x_0}')
        else:
            print("Дискриминант меньше 0. Корней нет")
        pass

    def calc(self):
        print()
        print("====Калькулятор====")
        while True:
            a = int(input("Введите первое число: "))
            b = int(input("Введите второе число: "))

            self.type_operation()

            self.main_procces(a, b)

            complete = input("Хотите завершить (да/нет): ")
            if complete.lower() != "нет":
                print("Пока")
                break
            else:
                continue
            pass

    def kv_ur(self):
        while True:
            print()
            print("====Квадратные уравнения====")
            a = int(input("Введите значение a: "))
            b = int(input("Введите значение b: "))
            c = int(input("Введите значение c: "))

            self.discr_ur(a, b, c)

            complete = input("Хотите завершить (да/нет): ")
            if complete.lower() != "нет":
                print("Пока")
                break
            else:
                continue
            pass

    def main(self):
        print("Системы: \n1.Калькулятор \n2.Квадратные уравнения")
        system_func = input("Выберите систему: ")

        if system_func == "1":
            self.calc()
        elif system_func == "2":
            self.kv_ur()
        else:
            print("Выберите 1, 2")


exzemlyar = Calculator()
exzemlyar.main()