﻿namespace operation_NUULL;

class Program
{
    static void Main(string[] args)
    {
        // Оператор объединения NULL
        string first = "da";
        string result_1 = first ?? "Нет данных";
        Console.WriteLine(result_1); // da

        string second = null;
        string result_2 = second ?? "Нет данных";
        Console.WriteLine(result_2); // Нет данных
    }
}