#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//Debug 通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序
// Release 称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好地使用
//int main()
//{
//	char* p = "hello bit.";
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//// Release 称为发布版本,进行了各种优化
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//断点（F9）再加F5：直接跳到断点处
//F10逐过程
//F11逐语句
//shift+F11:跳出函数
//ctrl+F5:直接运行起来而不调试
//shift+F5:停止调试

////调用堆栈
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

////实例一：实现代码：求 1！+2！+3！ ...+ n! ；不考虑溢出
////条件断点
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);	//3 1！+2！+3!=1+2+6=9
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//实例二：
//栈区的默认使用：先用高地址空间，再用低地址空间
//数组随着下标的增长，地址是由低到高变化的
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", arr);
	printf("%p\n", &i);
	//for (i = 0; i <= 12; i++)
	//{
	//	arr[i] = 0;
	//	printf("hehe\n");
	//}
	system("pause");
	return 0;
}