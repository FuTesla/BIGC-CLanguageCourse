#include<stdio.h>
int main()
{
	int y, m, d, total=0, is_leap = 0;
	int monthgroup[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("输入年月日（示例YYYYMMDD)：");
	scanf_s("%d %d %d", &y, &m, &d);
	
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		is_leap = 1;
		monthgroup[1] = 29;
	}
	
	switch (m)
	{
	case 1:
		total = d;//month0
		break;
	case 2:
		total = 31 + d;
		break;
	case 3:
		total = 31 + (is_leap ? 29 : 28) + d;
		break;
	case 4:
		total = 31 + (is_leap ? 29 : 28) + 31 + d;
		break;
	case 5:
		total = 31 + (is_leap ? 29 : 28) + 31 + 30 + d;
		break;
	case 6:
		total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + d;//5
		break;
	case 7:
		total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + 30 + d;//6
		break;
	case 8:
		total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + d;//7
		break;
	case 9:
		total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + d;//8
		break;
	case 10:
		total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;//9
		break;
	case 11:
		total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;//10
		break;
	case 12:
		total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;//11
		break;

	default:
		printf("输入的月份无效！\n");
		return(1);
	}

	printf("这是%d年的第%d天\n",y,total);
	return (0);
}