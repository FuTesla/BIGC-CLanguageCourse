#include<stdio.h>
#include <ctype.h>

char str[50];
char* p;
int num = 0, word = 0;

int main(void)
{
	printf("input:");
	fgets(str, sizeof(str), stdin);
	p = str;
	
	while (*p != '\0')
	{
		if (isalpha(*p))
		{
			word++;
		}
		else if (isdigit(*p))
		{
			num++;
		}
		p++;
	}

	printf("有%d个字符\n有%d个数字\n", word, num);
}