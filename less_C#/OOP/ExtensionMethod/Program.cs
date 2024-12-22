using System;

namespace ExtensionMethod;

static class MyExtensionMethod
{
    public static void Print(this DateTime dateTime)
    {
        Console.WriteLine($"Текущая дата: {dateTime}");
    }
}

class Program
{
    static void Main(string[] args)
    {
        DateTime.Now.Print();
    }
}
