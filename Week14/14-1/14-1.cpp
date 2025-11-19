#include<stdio.h>
#include<string.h>
#define SUM 3
#define NAME_SIZE 10

char name[SUM];
int prize;
int max = 0, min = 0, i, j;
struct BOOK
{
	char name[NAME_SIZE];
	int prize;
};

int main(void)
{
	//书籍index录入部分
	struct BOOK str[SUM];
	printf("在此键入书籍名称和价格\n\n");
	for (i = 0; i < SUM; i++)
	{
		printf("第%d本书\n", i + 1);
		printf("名称：");
		fgets(str[i].name, sizeof(str[i].name), stdin);
		str[i].name[strcspn(str[i].name, "\n")] = '\0';
		printf("价格：");
		scanf_s("%d", &str[i].prize);
		while (getchar() != '\n');
		printf("\n");
	}

	//检查堆栈用
	printf("输入检查：\n");
	printf("┌----------------┐\n");
	printf("|--名称--┼--价格-|\n");
	printf("├----------------┤\n");
	for ( j = 0; j < SUM; j++)
	{
		printf("|--%s--┼--%d--|\n", str[j].name, str[j].prize);
		printf("├----------------┤\n");
	}
	printf("\n");
	

	//按大小排序
	for (int n = 0; n < SUM; n++)
	{
		for (int m = 0; m < SUM - 1 - n; m++)
		{
			if (str[m].prize > str[m + 1].prize)
			{
				struct BOOK temp = str[m]; 
				str[m] = str[m + 1];
				str[m + 1] = temp;
			}
		}
	}

	//输出
	printf("价格最低的书是%s,其价格为%d\n", str[0].name, str[0].prize);
	printf("价格最高的书是%s,其价格为%d\n", str[SUM-1].name, str[SUM-1].prize);
}