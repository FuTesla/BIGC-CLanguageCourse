#include<stdio.h>

int main(void)
{
	int before = 1, after = 2, a = 0, i;

	printf("1   1   2   ");//输出计算之前的数据

	for (i = 1; i <= 17; i++)//求n个斐波那契数列，由i=n-3值决定
	{
		a = before + after;//即将输出的数a是前两个数据之和
		
		printf("%d   ", a);//输出a
		
		before = after;//把上一次计算的（后一个数）写入下一次计算的(前一个数)
		after = a;//下一次计算的（后一个数）是上一次计算两个数据之和
	}
}