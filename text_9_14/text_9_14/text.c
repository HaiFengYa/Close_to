#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ַ��� - ��˫������������һ���ַ�
//�ַ����� - ������һ����ͬ���͵�Ԫ��
//�ַ����ڽ�β��λ��������һ��\0���ַ� - \0���ַ����Ľ�����־
//\0�ڼ����ַ������ȵ�ʱ�������ַ�������

//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//
//	////��ӡ�ַ���
//	printf("%s\n",arr1);
//	printf("%s\n", arr2);
//
//	//���ַ������� - string length
//	int len = strlen("abc");
//	printf("%d\n",len);
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//int main()
//
//{
//	//ת���ַ� - ת������ԭ������˼
//	printf("C:\text\text.c");
// printf("C:\\text\\text.c");
//	printf("ab\ncd");
//	return 0;
//}

//int main()
//{
//	//printf("(are you ok\?\?)"); // ??) - ] -- ����ĸ��
//	//printf("%c\n",'\'');
//	//printf("%s\n","\"");
//	//printf�ڴ�ӡ��ʱ������ƶ���ӡ��ʽ
//	//printf("\a\a\a"); //�����ַ� ����
//
//	return 0;
//}

//int main()
//{
//	// \ddd�˽���
//	//printf("%c\n", '\130'); // --X
//	//printf("%c\n", '\130'); // --88
//	//X --ASCII��ֵ��88
//
//	// \Xddʮ����
//	//printf("%c\n",'\X30');  //48 -- '0'
//
//	//printf("%d\n", strlen("C:\text\328\text.c")); // �ַ�������14
//
//	return 0;
//}

//ע���������������Ӵ����

//int main()
//{
//	//int a = 10; //C++ע�ͷ��
//	
//	//C����ע�ͷ�� -- ��֧��Ƕ��ע�� 
//	/*
//	int b = 0;
//	*/
//
//	return 0;
//}

//int main()
//{
//	int input = 0; //����
//	printf("������ҪŬ��ѧϰ��(1/0)?>:\n");
//	scanf("%d",&input);
//	if (input == 1) 
//	{
//		printf("׬��Ǯ\n");
//	}
//	else 
//	{
//		printf("�Կ�����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	//ѭ��
//	while (line < 30000)
//	{
//		printf("д����%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("�ҵ��ù���\n");
//	}
//	return 0;
//
//}

//����

//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = Add(num1 , num2);
//	printf("%d\n", sum);
//	return 0;
//}

//����

