#include<stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
	char a[] = "你好";
	char b[] = "今天天气怎么样";
	char c[] = "再见";
	char d[] = "bye";
	char input[20];
	 
	while (true) 
	{
		printf("你好!我是简易对话机器人，我们可以开始聊天啦!\n");
		fgets(input, sizeof(input), stdin);//获取用户输入
		input[strcspn(input, "\n")] = '\0'; // 去除换行符

		// 比较用户输入并做出相应回复
		if (strcmp(input, a) == 0) 
		{
			printf("你好呀!很高兴和你聊天。\n\n");
		}
		else if (strcmp(input, b) == 0)
		{
			printf("我还没办法知道天气呢，但希望你有愉快的一天!\n\n");
		}
		else if (strcmp(input, c) == 0) 
		{
			printf("再见啦!期待下次再聊。\n\n");
			break;  // 结束循环
		}
		else if (strcmp(input, d) == 0)
		{
			break;  // 结束循环
		}
		else 
		{
			printf("不太明白你的意思，可以换个说法再和我聊聊哦。\n\n");
		}
	}
}