#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char a[50], b[50];
	int i = 0;

	printf("输入第一个字符串：");
	fgets(a, sizeof(a), stdin);//获取用户输入的字符串
	a[strcspn(a, "\n")] = '\0'; // 移除换行符
	//gets_s(a);
	
	printf("输入第二个字符串：");
	fgets(b, sizeof(b), stdin);//获取用户输入的字符串
	b[strcspn(b, "\n")] = '\0'; // 移除换行符
	//gets_s(b);
	
	//失败部分：此处为原来的代码，但是该代码无法实现输出差值为ASCII编码
	//i = strcmp(a, b);
	//printf("%d", i);

	//AI辅助部分
	// 手动比较字符串
	while (a[i] != '\0' && b[i] != '\0') {
		if (a[i] != b[i]) {
			printf("%d\n", a[i] - b[i]);  // 直接相减，输出ASCII差值
			return 0;  // 发现不同立即返回
		}
		i++;//继续检查字符串中的下一个字
	}

	// 处理一个字符串比另一个短的情况
	if (a[i] == '\0' && b[i] == '\0') {
		printf("0\n");  // 字符串完全相同输出0
	}
	else if (a[i] == '\0') {
		printf("%d\n", -b[i]);  // a较短，返回负值
	}
	else {
		printf("%d\n", a[i]);  // b较短，返回正值
	}
}