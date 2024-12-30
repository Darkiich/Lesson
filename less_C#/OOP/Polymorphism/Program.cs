using System;

namespace Polymorphism;

class BaseCar
{
    public void Driver(Car car)
    {
        car.Drive();
    }
}

class Car
{
    // virtual - ключевое слово, которое "ставит метку" на этот метод для возможности его переопределения в производных классах
    public virtual void StartEngine()
    {
        Console.WriteLine("Запускаем двигатель");
    }

    public virtual void Drive()
    {
        StartEngine();
        Console.WriteLine("Машина едет");
    }
}

class SportCar : Car
{
    // override - ключевое слово, которое указывает, что этот метод переопределяется   
    public override void StartEngine()
    {
        Console.WriteLine("Запускаем спортивный двигатель");
    }

    public override void Drive()
    {
        StartRefuel();
        StartEngine();
        Console.WriteLine("Спортивная машина едет");
    }

    private void StartRefuel()
    {
        Console.WriteLine("Запускаем заправку спортивной машины");
    }
}

class Program
{
    static void Main(string[] args)
    {
        BaseCar baseCar = new BaseCar();
        baseCar.Driver(new Car());

        Console.WriteLine();

        baseCar.Driver(new SportCar()); // Пример использования полиморфизма
    }
}
