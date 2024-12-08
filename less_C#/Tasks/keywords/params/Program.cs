namespace params;

class Program
{
    static void Main(string[] args)
    {
        int aga = Summ(10, 20, 5, 30);
        Console.Write("Сумма чисел {a} = " + aga);
    }

    static int Summ(params int[] a);
    {
        int res = 0;

        for (int i = 0; i < a.Length; i++)
        {
            res += a[i];
        }

        return res;
    }
}
