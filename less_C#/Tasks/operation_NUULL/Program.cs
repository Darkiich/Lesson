namespace operation_NUULL;

class Program
{
    static void Main(string[] args)
    {
        // Оператор объединения NULL
        Console.WriteLine("Оператор объединения NULL");
        string first = "da";
        string result_1 = first ?? "Нет данных";
        Console.WriteLine(result_1); // da

        string second = null;
        string result_2 = second ?? "Нет данных";
        Console.WriteLine(result_2); // Нет данных
        Console.WriteLine("");

        // Оператор присваивания NULL
        Console.WriteLine("Оператор присваивания NULL");
        string third = "da";
        third ??= "Нет данных";
        Console.WriteLine(third); // third

        string four = null;
        four ??= "Нет данных";
        Console.WriteLine(four); // Нет данных
        Console.WriteLine("");

        // Оператор условного NULL
        Console.WriteLine("Оператор условного NULL");
        int[] five = {1, 2, 3};
        Console.WriteLine(five?.Sum() ?? 0); // 6

        int[] six = {};
        Console.WriteLine(six?.Sum() ?? 0); // 0
    }
}