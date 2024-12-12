using System;
namespace nullable;

class Program
{
    static void Main(string[] args)
    {
        /*
        int a = null; // Не допускает присвоить NULL
        System.Console.WriteLine(a;
        */

        int? a = null; // Допускает присвоить NULL
        System.Console.WriteLine(a);

        string? b = "6";
        System.Console.WriteLine(b ?? "Нет данных"); // 6

        string? с = null;
        System.Console.WriteLine(с ?? "Нет данных"); // Нет данных
    }
}
