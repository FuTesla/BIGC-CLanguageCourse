#include<stdio.h>

int a[2][3], b[2][3], c[2][3];
int i, j;

int main(void) 
{
	//算法说明
	printf("该算法仅支持2*3阵列的加法计算\n");
	printf("每行不同数据使用空格连接\n");
	printf("\n");

	//获取用户数据
	printf("请输入第一阵列数据：\n");
	for (i = 0; i <= 1; i++)//控制行循环
	{
		printf("第%d行：", i + 1);
		for (j = 0; j <= 2; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("\n");
	printf("请输入第二阵列数据：\n");
	for (i = 0; i <= 1; i++)//控制行循环
	{
		printf("第%d行：", i + 1);
		for (j = 0; j <= 2; j++)
		{
			scanf_s("%d", &b[i][j]);
		}
	}
	printf("\n");

	//计算矩阵
	for (i = 0; i <= 1 ; i++)//控制行循环
	{
		for (j = 0; j <= 2 ; j++)//控制列循环
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	//输出
	printf("以下是计算好的新阵列\n");
	for (i = 0; i <= 1; i++)//控制行循环
	{
		for (j = 0; j <= 2; j++)//控制列循环
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}