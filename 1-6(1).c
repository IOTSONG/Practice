#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//主函数
int main()					//定义主函数
{						//主函数体开始
	int max(int x, int y, int z);		//对被调用函数max的声明
	int a, b, c, d;				//定义变量a,b,c,d
	scanf("%d,%d,%d" ,& a, &b, &c);		//输入变量a,b和c的值
	d = max(a, b, c);			//调用max函数，将得到的结果赋给d
	printf("max = %d\n", d);		//输出d的值
	return 0;				//返回函数值为0
}						//主函数体结束
//求两个整数中的较大者的max函数
int max(int x, int y, int z)			//定义max函数，函数值为整型，形式参数x,y和z为整型
{
	int n, m;				//max函数中的声明部分，定义本函数中用到的变量n,m为整型
	if (x > y)n = x;			//若x>y成立，将x的值赋给变量n
	else n = y;				//否则（即x>y不成立），将y的值赋给n
	if (z > n)m = z;			//若z>n成立，将z的值赋给m
	else m = n;				//否则（即z>n不成立），将将n的值赋给m
	return(m);				//将m的值作为max函数值，返回到调用max函数的位置
}
