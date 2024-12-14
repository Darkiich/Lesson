using System;

namespace Class;

enum Color
{
    Black = 1,
    White = 2,
    Green = 3,
    Brown = 4
}
class TV
{
    public int height;
    public int width;
    public int diagonal;
    public Color color;
}
class Program
{
    static void Main(string[] args)
    {
        TV tv = new TV();

        tv.height = 68;
        tv.width = 121;
        tv.diagonal = 55;
        tv.color = Color.Black;

        System.Console.WriteLine($"Высота: {tv.height},\nШирина: {tv.width},\nДиагональ: {tv.diagonal},\nЦвет: {tv.color}");
    }
}
