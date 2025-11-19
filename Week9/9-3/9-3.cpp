#include<stdio.h>

//副程序-计算
int CALC(int n)
{
	int a = 12;
	for (int i = 2; i <= n; i++)
	{
		a += 2;
	}
	return a;
}

int main()
{
	int p;
	printf("你想知道第几个人的年龄？\n");
	scanf_s("%d", &p);

	int a = CALC(p);
	printf("第%d个人的年龄是%d岁", p, a);
}