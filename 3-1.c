#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float f, c;		//����f��cΪ�����ȸ����ͱ���
	f = 64.0;		//ָ��f��ֵ
	c = (5.0 / 9) * (f - 32);	//���ù�ʽ����c��ֵ
	printf("f=%f\nc=%f\n", f, c);	//���c��ֵ
	return 0;
}