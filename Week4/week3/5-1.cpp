#include<stdio.h>
int main()
{
	float a, b, c, d ;
	printf("输入三个数，并使用英文逗号连接：");
	scanf_s("%f,%f,%f", &a, &b, &c);
	
	d = a;
	if (b < d) 
	{
		d = b;
	}
	if (c<d)
	{
		d = c;
	}
	printf("%f", d);
	return 0;
}
