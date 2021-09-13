#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//字符串 - 用双引号括起来的一串字符
//字符数组 - 数组是一组形同类型的元素
//字符串在结尾的位置隐藏了一个\0的字符 - \0是字符串的结束标志
//\0在计算字符串长度的时候不算做字符串内容

//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//
//	////打印字符串
//	printf("%s\n",arr1);
//	printf("%s\n", arr2);
//
//	//求字符串长度 - string length
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
//	//转义字符 - 转变了它原来的意思
//	printf("C:\text\text.c");
// printf("C:\\text\\text.c");
//	printf("ab\ncd");
//	return 0;
//}

//int main()
//{
//	//printf("(are you ok\?\?)"); // ??) - ] -- 三字母词
//	//printf("%c\n",'\'');
//	//printf("%s\n","\"");
//	//printf在打印的时候可以制定打印样式
//	//printf("\a\a\a"); //警告字符 蜂鸣
//
//	return 0;
//}

//int main()
//{
//	// \ddd八进制
//	//printf("%c\n", '\130'); // --X
//	//printf("%c\n", '\130'); // --88
//	//X --ASCII码值是88
//
//	// \Xdd十进制
//	//printf("%c\n",'\X30');  //48 -- '0'
//
//	//printf("%d\n", strlen("C:\text\328\text.c")); // 字符串长度14
//
//	return 0;
//}

//注释是用来结束复杂代码的

//int main()
//{
//	//int a = 10; //C++注释风格
//	
//	//C语言注释风格 -- 不支持嵌套注释 
//	/*
//	int b = 0;
//	*/
//
//	return 0;
//}

//int main()
//{
//	int input = 0; //输入
//	printf("请问你要努力学习吗(1/0)?>:\n");
//	scanf("%d",&input);
//	if (input == 1) 
//	{
//		printf("赚大钱\n");
//	}
//	else 
//	{
//		printf("吃苦耐劳\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	//循环
//	while (line < 30000)
//	{
//		printf("写代码%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("找到好工作\n");
//	}
//	return 0;
//
//}

//函数

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

//数组

