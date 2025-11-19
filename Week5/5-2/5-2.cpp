#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int a = rand() % 100 + 1, b, c = 0;
    
    printf("输入一个数：\n");
    scanf_s("%d", &b);

    while (a != b)
    {
        if (a < b)
        {
            printf("数猜大了！再试一次\n");
            scanf_s("%d", &b);
            c++;
        }
        else if (a > b)
        {
            printf("数猜小了！再试一次\n");
            scanf_s("%d", &b);
            c++;
        }
    }
   
    printf("猜对了！\n");
    printf("一共猜了%d次\n",c);
    return 0;
}