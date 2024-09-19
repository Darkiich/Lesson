import cmath

def calculator():
    while True:
        
        firstvalue = int(input("Введите первое число: "))
        secondvalue = int(input("Введите второе число: "))
        
        print("Типы операций:\n 1.Сложение\n 2.Вычитание\n 3.Умножение\n 4.Деление\n 5.Степень числа\n 6.Процент")
        sign = str(input("Выберите тип операции (1, 2, 3, 4, 5, 6): "))
        
        match sign:
            case "1":
                print(f'Сумма первого и второго числа = {firstvalue + secondvalue}')
            case "2":
                print(f'Разность первого и второго числа = {firstvalue - secondvalue}')
            case "3":
                print(f'Умножение первого числа на второе = {firstvalue * secondvalue}')
            case "4":
                if secondvalue != 0:
                    print(f'Деление первого числа на второе = {firstvalue / secondvalue}')
                else:
                    print("На ноль делить нельзя")
                    continue
            case "5":
                print(f'Степень числа = {firstvalue ** secondvalue}')
            case "6":
                print(f'Процент числа = {firstvalue % secondvalue}')
            case _:
                print("Ошибка.Введите тип операциии (1, 2, 3, 4, 5, 6)")
                continue
                
        complete = input("Хотите завершить работу калькулятора (да/нет): ")
        if complete != "нет":
            break
        else:
            continue

# Решение кв.уравнений
def squareFunctions():
    while True:
        
        print("Общий вид уравнения ax^2 + bx + c = 0")
        firstvalue_sq = int(input("Введите коэффициент a: "))
        secondvalue_sq = int(input("Введите коэффициент b: "))
        thirdvalue_sq = int(input("Введите коэффициент c: "))
        
        print("Считаем значение дискриминанта, D = b^2 - 4*a*c")    
        discriminant = (secondvalue_sq**2) - 4*secondvalue_sq*thirdvalue_sq
        print(f'Дискриминант = {discriminant}')
        
        if discriminant > 0:
            x_1 = (-secondvalue_sq + cmath.sqrt(discriminant)) / (2*firstvalue_sq)
            x_2 = (-secondvalue_sq - cmath.sqrt(discriminant)) / (2*firstvalue_sq)
            print(f'D > 0. Уравнение имеет два корня, x1 = {x_1} и x2 = {x_2}')
        elif discriminant == 0:
            x_0 = -secondvalue_sq / (2*firstvalue_sq)
            print(f'D = 0. Уравнение имеет один корень, {x_0}')
        elif discriminant < 0:
            print('D < 0. Уравнение не имеет корней')
        else:
            print("Ошибка")
        
        complete_sq = input("Хотите завершить работу решения квадратных уравнений (да/нет): ")
        if complete_sq != "нет":
            break
        else:
            continue
        
def baseSystem():
    while True:
        print("Имеющиеся типы систем: \n 1.Калькулятор\n 2.Решение квадратных уравнений")
        system = str(input("Выберите систему (1, 2): "))
        
        match system:
            case "1":
                print("Вы выбрали систему калькулятора")
                calculator()
            case "2":
                print("Вы выбрали систему квадратных уравнений")
                squareFunctions()
            case _:
                print("Ошибка. Введите число")
                continue
baseSystem() 