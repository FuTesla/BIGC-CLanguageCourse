using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("请输入日期（格式：YYYY-MM-DD）:");
        DateTime inputDate = DateTime.Parse(Console.ReadLine());
        int dayOfYear = inputDate.DayOfYear;
        Console.WriteLine($"{inputDate:yyyy年MM月dd日}是{inputDate.Year}年的第{dayOfYear}天");
    }
}