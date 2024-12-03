namespace functions;

class Program
{
    static int Summa(int a, int b)
    {
        int res = a + b;
        return res;
    }

    static void PrintRes(int result)
    {
        Console.WriteLine($"Результат: {result}");
    }

    static void Main(string[] args)
    {
        Console.Write("Введите первое число: ");
        var a = int.Parse(Console.ReadLine());

        Console.Write("Введите второе число: ");
        var b = int.Parse(Console.ReadLine());

        var c = Summa(a, b);
        
        PrintRes(c);
    }
}

