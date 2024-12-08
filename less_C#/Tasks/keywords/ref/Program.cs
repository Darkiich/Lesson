namespace keyword;
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
    }

    // Ключевое слово ref - передает значение по ссылке
    static int Summa(ref int first, ref int second)
    {
        return first + second;
    }
}