#include<stdio.h>
main() 
{
	float a, b;

	printf("输入需要计算的两个数，中间用逗号隔开：");
	scanf("%f,%f", &a, &b);
		printf("a=%f,b=%f,a+b=%f\n,a-b=%f\n,a*b=%f\n,a/b=%f\n", a, b, a + b, a - b, a * b, a / b);
}