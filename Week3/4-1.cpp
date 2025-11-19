#include<stdio.h>
int main()
{
	float a, b;

	printf("输入需要计算的两个数，中间用英文逗号隔开：");
	scanf_s("%d,%d", &a, &b);
	printf("a=%d, b=%d\n", a, b);
	printf("a+b=%d\n", a + b);
	printf("a-b=%d\n", a - b);
	printf("a*b=%d\n", a * b);
	printf("a/b=%f\n", a / b);
	printf("a%b=%f\n", (int)a % (int)b);
	
	return 0;
}
