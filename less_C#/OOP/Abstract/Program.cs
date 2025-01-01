using System;

namespace Abstract;

/* Модификатор abstract в объявлении класса, метода или свойства позволяет указать, что этот класс, метод или свойство не содержат реализации.
   Т.е нельзя создать объект этого класса
*/

abstract class TV
{
    // Абстрактный метод неявно представляет собой виртуальный метод, тоесть abstract - это virtual
    public abstract void ElectricityConnected();
    public abstract void PowerOn();
}

class SystemTV : TV
{
    static bool power = true;

    // Т.к абстрактные методы - виртуальные, то их реализации должны быть обязательно переопределены в производном классе
    public override void ElectricityConnected()
    {
        if (!power)
        {
            Console.WriteLine("Система ТВ не подключена к электричеству");
        }
        else
        {
            Console.WriteLine("Система ТВ подключена к электричеству");
            PowerOn();
        }
    }

    public override void PowerOn()
    {
        if (SystemTV.power)
        {
            Console.WriteLine("Телевизор включен");
        }
        else
        {
            Console.WriteLine("Сначала подключите систему ТВ к электричеству");
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        SystemTV systemTV = new SystemTV();
        systemTV.ElectricityConnected();
    }
}
