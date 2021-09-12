#include <stdio.h>

//编译代码
//1.写出主函数（main函数）；
//如何执行代码？ -  c语言是从主函数的第一行开始执行代码

//printf - 库函数 - 在屏幕中打印信息
//printf的使用，得引用头文件 stdio.h

//int main()
//{
//	printf("hello\n");
//
//	return 0;
//}

//注释：
//main函数是程序的入口。
//一个工程中main函数有且仅有一个。
//1.一个工程中可以有多个.c的文件；
//2.但是多个.c的文件中只能有一个main函数。

//数据类型：
//计算机语言 - 写程序 - 解决生活中的问题；
//计算机语言必须有能力来描述生活中的问题。

//char 字符数据类型；
// short 短整型；
// int 整型；
// long 长整型；
// long long 更长整型；
// float 单精度浮点型；
// double 双精度浮点型；

int main()
{
	//输入一个整数 - %d
	printf("%d\n", 100);
	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间大小
	//C语言标准
	//sizeof(long) >= sizeof(int)
	printf("%d\n", sizeof(char));           //1个字节
	printf("%d\n", sizeof(short));         //2个字节
	printf("%d\n", sizeof(int));          //4个字节
	printf("%d\n", sizeof(long));        //4个字节
	printf("%d\n", sizeof(long long));  //8个字节
	printf("%d\n", sizeof(float));     //4个字节
	printf("%d\n", sizeof(double));   //8个字节

	return 0;
}

//计算机中的单位：
// bit - 比特位                    二进制 0-1
// byte - 字节 = 8bit              八进制 0-7
// kb = 1024byte                   十进制 0-9
// mb = 1024kb
// gb = 1024mb
// tb = 1024gb
// pb = 1024tb