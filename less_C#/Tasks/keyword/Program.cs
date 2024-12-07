namespace keyword;
using System;

class Program
{
    static void Main(string[] args)
    {
        Console.Write("Введите первое число: ");
        int a1 = int.Parse(Console.ReadLine());

        Console.Write("Введите второе число: ");
        int a2 = int.Parse(Console.ReadLine());
        
        Console.WriteLine();
        var result = Summa(ref a1, ref a2);
        Console.WriteLine("Результат работы ref: " + result);
        
        
        Console.WriteLine();


        Outs(out int a);
        Console.WriteLine("Результат работы out: " + a);
    }

    // Ключевое слово ref - передает значение по ссылке
    static int Summa(ref int first, ref int second)
    {
        return first + second;
    }

    // Ключевое слово out - тот же ref, но гарантирует, что в вызваном методе будет инициализирована переменная
    static void Outs(out int a3)
    {
        a3 = 100;
    }
}