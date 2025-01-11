using System;

namespace Class_and_Struct;

// Код в классе является ссылочниым типом выполняется чуть-чуть медленее, но класс может работать быстрее чем структура

public class PointClass
{
    public int a { get ; set; }
    public int b { get ; set; }

    public void Print1()
    {
        Console.Writline($"a: {a}, b: {b}");
    }
}

// Код в структуре является значимым типом и выполняется быстрее
// Структура не может наследоваться от чего-либо кроме интерфейса
// Конструктор в структуре нельзя создать без параметров

public struct PointStruct
{
    public int a { get ; set; }
    public int b { get ; set; }

    public void Print2()
    {
        Console.Writline($"a: {a}, b: {b}");
    }
}

class Program
{
    static void Print3(PointClass pointclass)
    {
        pointclass.a++;
        pointclass.b++;
    }

    static void Print4(PointStruct pointstrct)
    {
        pointstrct.a++;
        pointstrct.b++;
    }

    static void Main(string[] args)
    {
        // PointClass pointclass; Не выделяя место в управляемой куче тут будет значение null
        // PointStruct pointstrct; Не выделяя место в стеке тут будет значение 0

        /* Т.о не выделяется место в управляемой куче, а происходит только инициализация полей по умолчанию - 0
           PointStruct pointstruct = new PointStruct(); */

        PointClass pointclass = new PointClass();
        pointclass.Print1();
    }
}
