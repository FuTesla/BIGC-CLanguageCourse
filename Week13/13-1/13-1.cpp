#include<stdio.h>

int i = 0, temp;
int a[5] = { 3,7,12,15,6 };
int * p1, * p2;

int main(void)
{
	temp = a[0];
	p1 = &a[1];

	for (i = 0; i < 4; i++)
	{
		temp = temp * *p1;
		p1++;
	}

	printf("Output=%d\n", temp);
}