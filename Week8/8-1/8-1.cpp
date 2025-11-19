#include<stdio.h>
#include<string.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main(void) 
{
	char a[50], b[50];
	printf("ÊäÈëĞ¡Ğ´×ÖÄ¸£º");
	gets_s(a);
	a[strcspn(a, "\n")] = '\0';
	strupr(a);
	strcpy(b, a);
	puts(b);
}