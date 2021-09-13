//#define _CRT_SECURE_NO_WARNINGS 1（如果想要使用scanf，这个必须放在第一行）
//scanf_s - VS编译器提供，不属于C语言标准规定（不建议使用）
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//输入俩个整数 计算较大的数

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

//初识常量和变量
// 常量 - 不能改变的量
// 变量 - 能被改变的量

//全局变量 - 外部定义
//int a = 10;
//
//int main()
//{
	//创建一个变量
	//类型  变量的名字  赋值;
	//类型  变量的名字  （不推荐使用）;
	//局部变量 - {}内部定义
	//当局部变量和全局变量名字冲突的时候，局部变量优先；
	//不建议：局部变量名字 = 全局变量名字

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

//%d - 整型
//%f - float
//%lf - double

//变量的使用
//scanf是输入函数

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

//作用域和生命周期

//作用域： 
//局部变量的作用域：就是变量所在的局部范围；
//全局变量的作用域：整个工程。(不在一个源文件里面需要申明：extern 类型 变量名称)

//int g = 2012; //全局变量
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

//生命周期：
//变量的生命周期：变量的创建和销毁之间的时间段；
//局部变量的生命周期：进入局部范围 生命开始，出局部范围 生命结束；
//全局变量的生命周期：程序的生命周期；

//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n",a);
//	}
//	return 0;
//}

//常量
//1.字面常量：3.14；10；'a';"abcdef";
//2.const修饰的常变量 - 具有常属性 （不能被改变的属性）
//int main()
//{
//	const int num = 20;
//	printf("%d\n", num);
//
//	return 0;
//}

//3.#define 定义标识符常量
//#define MAX 10000;
//int main()
//{
//	int n = MAX;
//	printf("n = %d\n", n);
//
//	return 0;
//}

//4.枚举常量
//可以一一列举的常量

//性别
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	MALE = 3, //赋初值
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