#include <stdio.h>
#include <string.h>

// 子函数：字符串复制函数
void copy(char* dest, const char* src, int m) 
{
    // 计算源字符串长度
    int len = strlen(src);

    // 定位到第m个字符（数组下标从0开始）
    const char* p = src + m - 1;

    // 复制字符直到字符串结束
    while (*p != '\0') 
    {
        *dest++ = *p++;
    }
    *dest = '\0';  // 添加字符串结束符
}


//主程序   
int main(void) 
{
    char str[50] = "qwertyuiop1234567890";  // 源字符串
    char new_str[50];                       // 目标字符串
    int m;                                  // 复制的起始位置

    printf("原始字符串: %s\n", str);
    printf("从第几个字符开始复制？ ");
    scanf_s("%d", &m);

    copy(new_str, str, m);  // 调用子函数

    printf("复制结果: %s\n", new_str);
}