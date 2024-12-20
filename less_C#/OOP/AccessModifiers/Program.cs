using System;
using AccessModifiers;
namespace AccessModifiers;

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

    public static int x = 0;
    private static int y = 1;
    public void PrintStaticX()
    {
        Console.WriteLine($"Публичная статическая переменная x: {x}");
    }

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
    }
}
