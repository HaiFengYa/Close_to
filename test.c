#include <stdio.h>

//�������
//1.д����������main��������
//���ִ�д��룿 -  c�����Ǵ��������ĵ�һ�п�ʼִ�д���

//printf - �⺯�� - ����Ļ�д�ӡ��Ϣ
//printf��ʹ�ã�������ͷ�ļ� stdio.h

//int main()
//{
//	printf("hello\n");
//
//	return 0;
//}

//ע�ͣ�
//main�����ǳ������ڡ�
//һ��������main�������ҽ���һ����
//1.һ�������п����ж��.c���ļ���
//2.���Ƕ��.c���ļ���ֻ����һ��main������

//�������ͣ�
//��������� - д���� - ��������е����⣻
//��������Ա��������������������е����⡣

//char �ַ��������ͣ�
// short �����ͣ�
// int ���ͣ�
// long �����ͣ�
// long long �������ͣ�
// float �����ȸ����ͣ�
// double ˫���ȸ����ͣ�

int main()
{
	//����һ������ - %d
	printf("%d\n", 100);
	//sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ��С
	//C���Ա�׼
	//sizeof(long) >= sizeof(int)
	printf("%d\n", sizeof(char));           //1���ֽ�
	printf("%d\n", sizeof(short));         //2���ֽ�
	printf("%d\n", sizeof(int));          //4���ֽ�
	printf("%d\n", sizeof(long));        //4���ֽ�
	printf("%d\n", sizeof(long long));  //8���ֽ�
	printf("%d\n", sizeof(float));     //4���ֽ�
	printf("%d\n", sizeof(double));   //8���ֽ�

	return 0;
}

//������еĵ�λ��
// bit - ����λ                    ������ 0-1
// byte - �ֽ� = 8bit              �˽��� 0-7
// kb = 1024byte                   ʮ���� 0-9
// mb = 1024kb
// gb = 1024mb
// tb = 1024gb
// pb = 1024tb