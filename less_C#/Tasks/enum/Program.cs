using System;

namespace enum;
class Program
{
    static void Main(string[] args)
    {
        enum Direction : byte
        {
            UpButton = 1,
            DownButton = 2,
            LeftButton = 3,
            RightButton = 4
        }
            
        var key = Console.ReadKey();

        System.Console.WriteLine($"ID {(int)key}, кнопка {key}");
    }
}
