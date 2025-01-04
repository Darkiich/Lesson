using System;

namespace Interface;

#region Создание интерфейса
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
#endregion

#region Наследование и реализация
// Наследование интерфейсов
interface IBaseInterface : IMoveble
{
}

interface IAdvancedInterface : IFixedMovement
{
}

// Реализация интерфейсов
class Car : IBaseInterface
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

// Реализация интерфейсов
class CarFixed : IAdvancedInterface
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
#endregion

#region Явная реализация интерфейсов
interface IFirstInterface
{
    void Print();
}

interface ISecondInterface
{
    void Print();
}

// Явная реализация интерфейсов
class MyOtherClass : IFirstInterface, ISecondInterface
{
    void IFirstInterface.Print()
    {
        Console.WriteLine("Явная реализация IFirstInterface");
    }

    void ISecondInterface.Print()
    {
        Console.WriteLine("Явная реализация ISecondInterface");
    }
}
#endregion
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

        Console.WriteLine();

        MyOtherClass myOtherClass = new MyOtherClass();
        Method1(myOtherClass);
        Method2(myOtherClass);

        Console.WriteLine();

        ((IFirstInterface)myOtherClass).Print();
        ((ISecondInterface)myOtherClass).Print();

        Console.WriteLine();

        if (myOtherClass is IFirstInterface myfirstother)
        {
            myfirstother.Print();

            if (myOtherClass is ISecondInterface mysecondother)
            {
                mysecondother.Print();
            }
        }

    }

    private static void Method1(IFirstInterface firstInterface)
    {
        firstInterface.Print();
    }

    private static void Method2(ISecondInterface secondInterface)
    {
        secondInterface.Print();
    }
}
