namespace keyword;
using System;

class Program
{
    static int Summa(ref int first, ref int second)
    {
        return first + second;
    }

    static void Main(string[] args)
    {
        Console.Write("Введите первое число: ");
        int a1 = int.Parse(Console.ReadLine());

        Console.Write("Введите второе число: ");
        int a2 = int.Parse(Console.ReadLine());
        
        var result = Summa(ref a1, ref a2);
        Console.WriteLine(result);
    }
}
