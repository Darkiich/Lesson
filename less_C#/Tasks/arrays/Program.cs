namespace arrays;

class Program
{
    static void Main(string[] args)
    {
        /*
        Перебор массива
        */

        int[] array = { 0, 1, 3, 4, 5, 2, 1, -4, -1, 10, 55 };

        //Блок 1. Выводит все элементы массива.
        for (int i = 0; i < array.Length; i++)
        {
            Console.WriteLine($"{i} элемент массива: {array[i]}");
        }

        Console.WriteLine();

        //Блок 2. Выводит все элементы массива в обратном порядке.
        for (int i = array.Length - 1; i >= 0 ; i--)
        {
            Console.WriteLine($"{i} элемент перевернутого массива: {array[i]}");
        }

        Console.WriteLine();

        //Блок 3. Выводит чётные элементы массива.
        for (int i = 0; i < array.Length; i++)
        {
            var res = array[i];

            if (res % 2 == 0)
            {
                Console.WriteLine($"Четное число массива: {res}");   
            }
        }

        Console.WriteLine();

        //Блок 4. Выводит все элементы массива через 1.
        for (int i = 0; i < array.Length; i += 2)
        {
            Console.WriteLine($"{i} элемент массива: {array[i]}");
        }

        Console.WriteLine();

        //Блок 5. Выводит все элементы массива пока не встретится элемент -1.
        for (int i = 0; i < array.Length; i++)
        {
            Console.WriteLine($"{i} элемент массива: {array[i]}");

            if (array[i] == -1)
            {
                Console.WriteLine($"Найден {i} элемент массива со значением: '{array[i]}'. Завершаю программу");
                break;
            }
        }
    }
}
