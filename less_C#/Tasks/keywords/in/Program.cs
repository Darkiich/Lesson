namespace keyword;

class Program
{
    static void Main(string[] args)
    {
        int ae = 5;
        Ins(ae);
    }
    
    // Ключевое слово in - тот же ref и out, но он запрещает изменять передаваемый аргумент
    static void Ins(in int a);
    {
        Console.WriteLine(a);
    }
}