#include<stdio.h>
int main()
{
	int a;
	
	while(1) {
		printf("你好!我是简易对话机器人，我们可以开始聊天啦!\n");
		scanf_s("%d", &a);
		
		switch (a) 
		{
		case 1:printf("Day1\n");
			break;
		case 2:printf("Day2\n");
			break;
		case 3:printf("Day3\n");
			break;
		case 0:break;

			default:
				printf("Error input!Please check your number!\n");
			break;
		}
	}
	return(0);
}

