namespace Properties;

class MyClassProperties
{
    // Сокращенные свойства get и set
    public string Properties { get; set; }
}
class MyClassFullProperties
{
    // Полные свойства get и set - геттер и сеттер. Обобщение - аксессоры
    private string a = "0";
    public string FullProperties
    {
        get
        {
            return a;
        }
        set
        {
            a = value;
        }
    }
}
class Program
{
    static void Main(string[] args)
    {
        MyClassFullProperties myClass = new MyClassFullProperties();
        myClass.FullProperties = "10";
        System.Console.WriteLine(myClass.FullProperties); // 10

        Console.WriteLine();

        MyClassProperties myClassProperties = new MyClassProperties();
        myClassProperties.Properties = "15";
        System.Console.WriteLine(myClassProperties.Properties); // 15
    }
}
