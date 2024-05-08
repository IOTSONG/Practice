#include<stdio.h>						//预编译处理指令
int main()								//定义主函数
{										//函数开始的标志
	int a, b, sum;						//本行是程序的声明部分，定义a,b,sum为整型变量
	a = 123;							//对变量a赋值
	b = 456;							//对变量b赋值
	sum = a + b;						//进行a+b的运算，并把结果存放在变量sum中
	printf("sum is %d\n", sum);			//输出结果
	return 0;							//函数执行完毕时返回函数值0
}										//函数结束的标志