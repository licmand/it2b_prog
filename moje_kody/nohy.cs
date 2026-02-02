class Nerg
{
    static void Main()
    {
        Console.WriteLine("zadej nohy: ");
        int a = int.Parse(Console.ReadLine());
        Console.WriteLine("zadej prasata: ");
        int b = int.Parse(Console.ReadLine());
        Console.WriteLine($"slepic je: {(a-(4*b))/2}");
    }
}
