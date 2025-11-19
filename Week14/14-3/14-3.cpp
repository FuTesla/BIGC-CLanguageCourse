#include<stdio.h>

struct DATE
{
	int year;
	int month;
	int day;
};

// 自定义函数1：判断是否为闰年
int isLeapYear(int year) 
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

//自定义函数2：计算该日是该年的第几天
int days(struct DATE date) 
{
    // 每月天数（非闰年）
    int monthDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // 如果是闰年，2月改为29天
    if (isLeapYear(date.year)) 
    {
        monthDays[1] = 29;
    }

    int dayOfYear = 0;

    // 累加前几个月的天数
    for (int i = 0; i < date.month - 1; i++) 
    {
        dayOfYear += monthDays[i];
    }
 
    dayOfYear += date.day; // 加上当月的天数
    return dayOfYear;
}

int main(void)
{
    struct DATE date;
    printf("请输入日期(年 月 日): "); 
    scanf_s("%d %d %d", &date.year, &date.month, &date.day);

    int dayCount = days(date);
    printf("该日期是%d年的第%d天。\n", date.year, dayCount);
}