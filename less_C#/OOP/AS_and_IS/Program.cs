using System;

namespace AS_and_IS;

class MyClass1
{
    public string c { get; set; }
    public string d { get; set; }

    public void Print1()
    {
        Console.WriteLine($"c: {c}, d: {d}");
    }
}

class MyClass2
{
    public int a { get; set; }
    public int b { get; set; }

    public void Print2()
    {
        Console.WriteLine($"a: {a}, b: {b}");
    }
}

class Program
{
    /*
        as - ключевое слово, которое преобразует принимаемый параметр в указанный тип, если он таким не является- параметр as Class
        is - ключевое слово, которое позволяет проверить, является ли параметр этого же типа, что и указаный класс - параметр is Class переменная
    */
    static void Method1(object obj)
    {
        MyClass2 myClass2 = obj as MyClass2; // Тут мы преобразовывваем obj в тип MyClass2 и сохраняем в объект

        if (myClass2 != null)
        {
            myClass2.Print2();
        }
        else
        {
            Console.WriteLine("Объект не является экземпляром MyClass2");
        }
    }

    static void Method2(object obj)
    {
        if (obj is MyClass1 myClass1) // Тут мы проверяем, является ли obj таким же типом, что и MyClass1 и сохраняем в переменную
        {
            myClass1.Print1();
        }
        else
        {
            Console.WriteLine("Объект не является экземпляром MyClass2");
        }
    }

    static void Main(string[] args)
    {
        object obj1 = new MyClass2{ a = 1, b = 2 }; // Эта запись аналогична и для MyClass obj = new MyClass2();
        //obj.Print2(); Неполучится из-за того что в типе(классе) object нету информации о MyClass2

        // MyClass2 myClass2 = (MyClass2)obj; // Явно конвертируем obj в MyClass2
        // myClass2.Print2();

        object obj2 = new MyClass1 { c = "Hello", d = "World" };

        Method1(obj1);
        Method2(obj2);
    }
}
