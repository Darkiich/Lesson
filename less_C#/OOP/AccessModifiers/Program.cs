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
        Console.WriteLine(x);
    }
    public void PrintY() //Открытый метод, выводящий приватную переменую y в методе PrintAll
    {
        Console.WriteLine(y);
    }

    public void PrintAll()
    {
        PrintX();
        PrintY();
    }
}
class Program
{
    static void Main(string[] args)
    {
        PublicPrivate myclass = new PublicPrivate();

        myclass.PrintAll();
    }
}
