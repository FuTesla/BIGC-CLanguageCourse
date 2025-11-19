#include <stdio.h>

int oth() {
    int year, month, day, total = 0, is_leap = 0;  //total
    //遍历初始化非闰年的各月天数
    int days_per_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    printf("请输入日期（年 月 日）：");
    scanf_s("%d %d %d", &year, &month, &day);

    // 判断闰年
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        is_leap = 1;
        days_per_month[1] = 29; // 闰年2月29天
    }
    // 通过switch逐月累加前几个月的天数
    switch (month) {
    case 1:  // 1月无需累加前面月份的天数
        total = day;
        break;
    case 2:  // 2月：累加1月的31天
        total = 31 + day;
        break;
    case 3:  // 3月：累加1月31天 + 2月天数（闰年29天，非闰年28天）
        total = 31 + (is_leap ? 29 : 28) + day;
        break;
    case 4:  // 4月：累加前3个月的总天数（1+2+3月）
        total = 31 + (is_leap ? 29 : 28) + 31 + day;
        break;
    case 5:  // 5月：累加前4个月的总天数（1+2+3+4月）
        total = 31 + (is_leap ? 29 : 28) + 31 + 30 + day;
        break;
    case 6:  // 6月：累加前5个月的总天数（1+2+3+4+5月）
        total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + day;
        break;
    case 7:  // 7月：累加前6个月的总天数（1+2+3+4+5+6月）
        total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + 30 + day;
        break;
    case 8:  // 8月：累加前7个月的总天数（1+2+3+4+5+6+7月）
        total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + day;
        break;
    case 9:  // 9月：累加前8个月的总天数（1+2+3+4+5+6+7+8月）
        total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + day;
        break;
    case 10: // 10月：累加前9个月的总天数（1+2+3+4+5+6+7+8+9月）
        total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
        break;
    case 11: // 11月：累加前10个月的总天数（1+2+3+4+5+6+7+8+9+10月）
        total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
        break;
    case 12: // 12月：累加前11个月的总天数（1+2+3+4+5+6+7+8+9+10+11月）
        total = 31 + (is_leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
        break;
    default: // 月份输入错误处理
        printf("月份输入错误！\n");
        return 1; // 非正常退出
    }

    printf("这是%d年的第%d天\n", year, total);
    return 0;
}
