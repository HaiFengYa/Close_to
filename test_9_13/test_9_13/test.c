//#define _CRT_SECURE_NO_WARNINGS 1�������Ҫʹ��scanf�����������ڵ�һ�У�
//scanf_s - VS�������ṩ��������C���Ա�׼�涨��������ʹ�ã�
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//������������ ����ϴ����

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max(int x, int y);
//	scanf("%d %d",&a,&b);
//	c = max(a,b);
//	printf("max = %d\n",c);
//
//	return 0;
//}
//
//int max(int x,int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//
//	return z;
//}

//��ʶ�����ͱ���
// ���� - ���ܸı����
// ���� - �ܱ��ı����

//ȫ�ֱ��� - �ⲿ����
//int a = 10;
//
//int main()
//{
	//����һ������
	//����  ����������  ��ֵ;
	//����  ����������  �����Ƽ�ʹ�ã�;
	//�ֲ����� - {}�ڲ�����
	//���ֲ�������ȫ�ֱ������ֳ�ͻ��ʱ�򣬾ֲ��������ȣ�
	//�����飺�ֲ��������� = ȫ�ֱ�������

//	int age = 20;
//	double weight = 50.5;
//
//	age = age + 1;
//	printf("%d\n", age);
//
//	weight = weight + 5;
//	printf("%lf\n",weight);
//
//	int a = 100;
//	printf("%d\n",a);
//
//	return 0;
//}

//%d - ����
//%f - float
//%lf - double

//������ʹ��
//scanf�����뺯��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//���������������

//������ 
//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ��
//ȫ�ֱ������������������̡�(����һ��Դ�ļ�������Ҫ������extern ���� ��������)

//int g = 2012; //ȫ�ֱ���
//
//int main()
//{
//	printf("1:%d\n", g);
//
//	printf("2021.9.13\n");
//	{
//		printf("2:%d\n", g);
//		int a = 10;
//		printf("a = %d\n",a);
//	}
//	printf("3:%d\n", g);
//
//	return 0;
//}

//�������ڣ�
//�������������ڣ������Ĵ���������֮���ʱ��Σ�
//�ֲ��������������ڣ�����ֲ���Χ ������ʼ�����ֲ���Χ ����������
//ȫ�ֱ������������ڣ�������������ڣ�

//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n",a);
//	}
//	return 0;
//}

//����
//1.���泣����3.14��10��'a';"abcdef";
//2.const���εĳ����� - ���г����� �����ܱ��ı�����ԣ�
//int main()
//{
//	const int num = 20;
//	printf("%d\n", num);
//
//	return 0;
//}

//3.#define �����ʶ������
//#define MAX 10000;
//int main()
//{
//	int n = MAX;
//	printf("n = %d\n", n);
//
//	return 0;
//}

//4.ö�ٳ���
//����һһ�оٵĳ���

//�Ա�
//enum Sex
//{
//	//����ö�����͵ı�����δ������ȡֵ
//	MALE = 3, //����ֵ
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}