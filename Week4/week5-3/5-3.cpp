#include<stdio.h>
int main()
{
	int a;
	printf("你好!我是简易对话机器人，我们可以开始聊天啦!\n");
	scanf_s("%d", &a);
	if (a == 1)
	{
		printf("Day1");
	}
	if (a == 2)
	{
		printf("Day2");
	}
	if (a == 3)
	{
		printf("Day3");
	}
	return(0);
}