#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//������
int main()								//����������
{										//�������忪ʼ
	int max(int x, int y, int z);		//�Ա����ú���max������
	int a, b, c, d;						//�������a,b,c,d
	scanf("%d,%d,%d" ,& a, &b, &c);		//�������a,b��c��ֵ
	d = max(a, b, c);					//����max���������õ��Ľ������d
	printf("max = %d\n", d);			//���d��ֵ
	return 0;							//���غ���ֵΪ0
}										//�����������
//�����������еĽϴ��ߵ�max����
int max(int x, int y, int z)			//����max����������ֵΪ���ͣ���ʽ����x,y��zΪ����
{
	int n, m;							//max�����е��������֣����屾�������õ��ı���n,mΪ����
	if (x > y)n = x;					//��x>y��������x��ֵ��������n
	else n = y;							//���򣨼�x>y������������y��ֵ����n
	if (z > n)m = z;					//��z>n��������z��ֵ����m
	else m = n;							//���򣨼�z>n��������������n��ֵ����m
	return(m);							//��m��ֵ��Ϊmax����ֵ�����ص�����max������λ��
}