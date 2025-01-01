using System;

namespace Interface;

interface IMoveble
{
    int MaxSpeed { get; }

    void Move();

    void Stop();
}

interface IFixedMovement
{
    bool IsFixed { get; }

    void Fix();

    void Unfix();
}

class Car : IMoveble
{
    public int MaxSpeed { get; }

    public Car(int maxSpeed)
    {
        MaxSpeed = maxSpeed;
    }

    public void Move()
    {
        Console.WriteLine($"Машина движется со скоростью {MaxSpeed}");
    }

    public void Stop()
    {
        Console.WriteLine("Машина остановилась");
    }
}

class CarFixed : IFixedMovement
{
    public bool IsFixed { get; }

    public CarFixed(bool isFixed)
    {
        IsFixed = isFixed;
    }

    public void Fix()
    {
        Console.WriteLine("Машина была отремонтированаn\nПоехали!");
    }

    public void Unfix()
    {
        Console.WriteLine("Машина в хорошем состоянии\nПоехали!");
    }
}

class Program
{
    static void Main(string[] args)
    {
        Car car = new Car(25);
        CarFixed carFixed = new CarFixed(false);

        if (carFixed.IsFixed)
        {
            carFixed.Fix();
            car.Move();
        }
        else
        {
            carFixed.Unfix();
            car.Move();
        }

        if (car.MaxSpeed >= 50)
        {
            Console.WriteLine("Машина имеет высокую скорость");
            car.Stop();
        }
    }
}
