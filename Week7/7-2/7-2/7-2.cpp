#include<stdio.h>
#define MAX_SIZE 100  // 定义最大容量

int	num, i, j, k;
int arr[MAX_SIZE];

int main(void) 
{
	//输入数据个数
	printf("输入即将录入数据的个数：");
	scanf_s("%d", &num);

	//输入数据
	for (i = 0; i < num; i++)
	{
		printf("输入要排列的第%d个数：", i + 1);//此为数据输入部分
		scanf_s("%d", &arr[i]);//将数据写入arr数组里面
	}

	//显示正确输入的数据
	for (i = 0; i < num; i++)
	{
		printf("%d   ", arr[i]);
	}

	printf("\n");

	//冒泡算法
	for (j = 0; j < num - 1; j++)//一共会排序num-1次，把数提到后面的循环
	{
		for (k = 0; k < num - j - 1; k++)//循环比较过程，当前比较的是num - j前面的那个数
		{
			if (arr[k] < arr[k + 1])//当前循环的第一个数比较他后面的那个数
			{
				//因为要求是降序排列，所以较小的数要排在后面
				int temp;//整个临时的容器
				temp = arr[k + 1];//较大的数写入临时容器
				arr[k + 1] = arr[k];//小数写入下一次循环的初始值
				arr[k] = temp;//大数排前面
			}
		}
	}

	//输出排列好的数据
	printf("排列好的数据：");
	for (i = 0; i < num; i++)
	{
		printf("%d   ", arr[i]);
	}
}