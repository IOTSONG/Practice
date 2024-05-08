#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//主函数
int main()								//定义主函数
{										//主函数体开始
	int a, b, c, max;
	printf("Please input a,b,c:\n");
	scanf("%d,%d,%d", &a, &b, &c);
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("The largest number is %d\n", max);
	return 0;
}