namespace null;

class Program
{
    static void Main(string[] args)
    {
        // Оператор объединения NULL
        string firstVar = "da";

        string result_1 = firstVar ?? string.Empty;
        Console.WriteLine(result_1); // da

        
        string secondVar = null;

        string result_2 = secondVar ?? "Нет данных";
        Console.WriteLine(result_2); // 
    }
}
