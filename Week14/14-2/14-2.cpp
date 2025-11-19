#include<stdio.h>
#include<string.h>
#define SUM 8
#define SIZE 10

struct STU
{
	int num;
	char name[SIZE];
	int c1;
	int c2;
	int c3;
	int balance;
};

int main(void)
{
	struct STU str[SUM];
	printf("在此录入学生信息\n\n");

	//循环录入
	for (int i = 0; i < SUM; i++)
	{
		printf("第%d位学生\n", i + 1);
		printf("学号：");
		scanf_s("%d", &str[i].num);
		while (getchar() != '\n');

		printf("姓名：");
		fgets(str[i].name, sizeof(str[i].name),stdin);
		str[i].name[strcspn(str[i].name, "\n")] = '\0';

		printf("成绩1：");
		scanf_s("%d", &str[i].c1);

		printf("成绩2：");
		scanf_s("%d", &str[i].c2);

		printf("成绩3：");
		scanf_s("%d", &str[i].c3);
		printf("\n");
	}

	for (int j = 0; j < SUM; j++)
	{
		str[j].balance = (str[j].c1 + str[j].c2 + str[j].c3)/3;
	}

	//按大小排序
	for (int n = 0; n < SUM; n++)
	{
		for (int m = 0; m < SUM - 1 - n; m++)
		{
			if (str[m].balance < str[m + 1].balance)
			{
				struct STU temp = str[m + 1];
				str[m + 1] = str[m];
				str[m] = temp;
			}
		}
	}

	printf("\n");
	printf("由高分到低分排序：\n\n");
	for (int k = 0; k < SUM; k++)
	{
		printf("第%d位学生\n", k + 1);
		printf("学号：%d\n",str[k].num);
		printf("姓名：%s\n", str[k].name);
		printf("成绩1：%d\n", str[k].c1);
		printf("成绩2：%d\n", str[k].c2);
		printf("成绩3：%d\n", str[k].c3);
		printf("平均成绩：%d\n", str[k].balance);
	}
}