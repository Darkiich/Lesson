using System;
using AccessModifiers;
namespace AccessModifiers;

partial class PartialMofifier
{
    /*
        partial - ключевое слово, которое позволяет разбить класс на несколько файлов
        Имя класса в другом файле должно быть такое же как в этом файле
    */

    public string First = { get; set; }
    public string Second = { get; set; }

    public PartialMofifier(string first, string second)
    {
        First = first;
        Second = second;
    }

    // Допустим, что этот метод вызывается из другого файла, а не тут
    public void Print()
    {
        Console.WriteLine($"Первая часть: {First}");
        Console.WriteLine($"Вторая часть: {Second}");
    }
}

class PublicPrivate
{
    /*
        public - позволяет использовать везде
        private - позволяет использовать только в области видимости класса, метода и.т.д
    */

    public int x = 1;
    private int y = 2;

    private void PrintX() // Закрытый метод, выводящий публичную переменую x в методе PrintAll
    {
        Console.WriteLine($"Публичная переменная x: {x}");
    }
    public void PrintY() //Открытый метод, выводящий приватную переменую y в методе PrintAll
    {
        Console.WriteLine($"Приватная переменная y: {y}");
    }

    public void PrintAll()
    {
        PrintX();
        PrintY();
    }
}

class StaticModifier
{
    /*
        static - позволяет объявить переменную, метод, класс и.т.д как статические.
        Т.е. позволяют обращаться к ним без создания экземпляра класса, а напрямую через имя класса
    */

    /* Статический конструктор может быть только один и вызывается только один раз, в статический конструктор нельзя указать параметры
       Статичческий конструктор вызывается самым первым при создании экземпляра класса
    */
    static StaticModifier()
    {
        System.Console.WriteLine("Вызван статический конструктор");
    }

    public static int x = 0;
    private static int y = 1;
    public void PrintStaticX()
    {
        Console.WriteLine($"Публичная статическая переменная x: {x}");
    }

    // Статический метод может работать только со статическими членами класса, если члены не являются статическими, то работать не будет
    public static void PrintStaticY()
    {
        Console.WriteLine($"Приватная статическая переменная y: {y}");
    }
}
class Program
{
    static void Main(string[] args)
    {
        PublicPrivate myclass = new PublicPrivate();
        myclass.PrintAll();

        Console.WriteLine();

        StaticModifier staticModifier = new StaticModifier();
        staticModifier.PrintStaticX(); // Обрщение к не статическому методу, с созданием экземпляра
        StaticModifier.PrintStaticY(); // Обращение к статическому методу через класс, без создания экземпляра

        Console.WriteLine();

        PartialMofifier partialMofifier = new PartialMofifier("Hello", "World");
        partialMofifier.Print();
    }
}
