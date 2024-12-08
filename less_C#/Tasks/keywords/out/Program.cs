namespace keyword;

class Program
{
    static void Main(string[] args)
    {
        Outs(out int a);
        Console.WriteLine("Результат работы out: " + a);
    }

    // Ключевое слово out - тот же ref, но гарантирует, что в вызваном методе будет инициализирована переменная
    static void Outs(out int a3)
    {
        a3 = 100;
    }
}
