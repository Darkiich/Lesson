namespace KeyWord_This;

class Car
{
    // Конструктор класса начало
    public Car(bool isRefilled)
    {
        this.isRefilled = isRefilled;
    }
    // Конструктор класса конец

    private void Refilled()
    {
        System.Console.WriteLine("Идет заправка...");
        this.isRefilled = true;
        System.Console.WriteLine("Заправлен!");
    }

    public void PowerEngine()
    {
        if (!this.isRefilled)
        {
            System.Console.WriteLine("Нету топлива!");
            Refilled();
        }
        System.Console.WriteLine("Двигатель работает");
    }

    private bool isRefilled = false;
}
class Program
{
    static void Main(string[] args)
    {
        Car car = new Car(false);
        car.PowerEngine();
    }
}