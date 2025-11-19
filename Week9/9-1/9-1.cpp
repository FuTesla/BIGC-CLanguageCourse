#include<stdio.h>
#define MAX_SIZE 8

//冒泡排序部分
void SUB1(int a[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

//主程序
int main()
{
	int a[] = { 2,3,4,1,8,7,6,5 };
	int i, j;

	SUB1(a, MAX_SIZE);//前面冒泡排序引用

	//输出部分
	printf("Output:\n");
	for (i = 0; i < MAX_SIZE; i++)
	{
		printf("%d   ", a[i]);
	}
}
