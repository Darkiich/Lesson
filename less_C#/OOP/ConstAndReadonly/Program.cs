using System;

namespace ConstAndReadonly;

class MyClass
{
    /*  Const - ключевое статическое слово, которое используется для объявления констант и не может быть изменено.
        В константу должно быть присвоено какое-то значение до компиляции

        Readonly - ключевое не статическое слово, которое может быть изменено в любой момент ТОЛЬКО В КОНСТРУКТОРЕ КЛАССА.
        В readonly не обязательно присваивать значение до компиляции
    */

    public const int MY_CONST_VAR = 5;
    public readonly int my_readonly_var_0;

    public MyClass(int my_readonly_var_1)
    {
        my_readonly_var_0 = my_readonly_var_1;
    }

    public void Print()
    {
        Console.WriteLine(MY_CONST_VAR); // 5
        Console.WriteLine(my_readonly_var_0); // 10
    }
}

class Program
{
    static void Main(string[] args)
    {
        MyClass myClass = new MyClass(10);
        myClass.Print(); // 5, 10
    }
}