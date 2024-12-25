using System;

namespace Inheritance;

class MyClass
{
    public string x { get; set; }
    public string y { get; set; }

    public void PrintX()
    {
        x ??= "0";
        Console.WriteLine($"X: {x}");
    }

    public void PrintY()
    {
        y ??= "0";
        Console.WriteLine($"Y: {y}");
    }

    public void PrintAll()
    {
        PrintX();
        PrintY();
    }
}

class Program : MyClass // Наследование предоставляет весь функционал наследуемого класса
{
    static void Main(string[] args)
    {
        Program program = new Program();
        program.x = "6";
        program.y = "10";
        program.PrintAll();
    }
}