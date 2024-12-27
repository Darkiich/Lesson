using System;

namespace KeyWord_Base;

class MyClass_2
{
    public MyClass_2(int a, int b)
    {
        _a = a;
        _b = b;
        Console.WriteLine("Конструктор MyClass_2");
    }

    public void Print()
    {
        Console.WriteLine($"a: {_a}\nb: {_b}");
    }

    public int _a { get; set; }
    public int _b { get; set; }
}

class MyClass_1 : MyClass_2
{
     // Перед тем, как вызовется этот конструктор, будет вызван конструктор MyClass_2
    public MyClass_1(int x, int y, int z) : base(x, y) 
    {
        _z = z;
        Console.WriteLine("Конструктор MyClass_1");
    }

    public int _z { get; set; }

    // base используется для обращения к содержимому класса MyClass_2
    public void Print()
    {
        base.Print();
        Console.WriteLine($"z: {_z}");
    }
}

class Program
{
    static void Main(string[] args)
    {
        MyClass_1 myClass = new MyClass_1(5, 4, 3);
        myClass.Print(); // a: 5, b: 4, z: 3
    }
}