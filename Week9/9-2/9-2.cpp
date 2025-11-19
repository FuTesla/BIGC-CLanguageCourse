#include<stdio.h>

int a, b, c;
double r = 0.0;

//副程序-偶数判断
void SUB1(int a)
{
	r = 0.0;
	for (int i = 2; i <= a; i += 2)
	{
		r += (1.0 / i);
	}
}

//副程序-奇数判断
void SUB2(int b)
{
	r = 0.0;
	for (int i = 1; i <= b; i += 2)
	{
		r += (1.0 / i);
	}
}

//主程序
int main()
{
	printf("请输入数字：");
	scanf_s("%d", &c);
	
	if (c % 2 == 0)
	{
		a = c;
		SUB1(a);
	}
	else
	{
		b = c;
		SUB2(b);
	}

	printf("以下为输出结果：\n");
	printf("%.4f", r);
}