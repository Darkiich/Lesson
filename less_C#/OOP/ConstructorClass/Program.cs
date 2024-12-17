using System;

namespace ConstructorClass;

class Car
{
    // Конструктор класса начало
    public Car(bool isRefilled)
    {
        _isRefilled = isRefilled;
    }
    // Конструктор класса конец

    private bool _isRefilled = false;

    private void Refilled()
    {
        System.Console.WriteLine("Идет заправка...");
        _isRefilled = true;
        System.Console.WriteLine("Заправлен!");
    }

    public void PowerEngine()
    {
        if (!_isRefilled)
        {
            System.Console.WriteLine("Нету топлива!");
            Refilled();
        }
        System.Console.WriteLine("Двигатель работает");
    }
}
class Program
{
    static void Main(string[] args)
    {
        Car car = new Car(false);
        car.PowerEngine();
    }
}
