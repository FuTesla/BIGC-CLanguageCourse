#include<stdio.h>

int n, r, c = 1, a;
int main()
{
	printf("2   ");
	for (n = 3; n < 100; n++)//逐数读取
	{
		for (r = 2; r < n; r++)//对当前数值比它小的数逐一试除，从2开始
		{
			if (n % r == 0)
			{
				break;
			}
			else
			{
				c++;
				printf("%d", n);
			}

			if (c == 5)//以下控制换行
			{
				c = 0;
				printf("\n");
			}
			else
			{
				printf("   ");
			}
		}
	}
}