using System;

class Program
{
    static void Main()
    {
        while (true) // 持续接收输入的循环[2,5](@ref)
        {
            Console.Write("请输入整数（负数退出）: ");
            string input = Console.ReadLine();

            // 验证输入是否为整数[3](@ref)
            if (!int.TryParse(input, out int n))
            {
                Console.WriteLine("输入无效，请重新输入整数！");
                continue; // 跳过本次循环[6](@ref)
            }

            // 处理负值退出[7,8](@ref)
            if (n < 0)
            {
                Console.WriteLine("检测到负值，程序终止");
                break; 
            }

            // 处理正值输出[2,5](@ref)
            if (n > 0)
            {
                for (int i = 1; i <= n; i++)
                {
                    Console.WriteLine(i);
                }
            }
            // n=0时直接继续循环[2](@ref)
        }
    }
}