#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//Debug ͨ����Ϊ���԰汾��������������Ϣ�����Ҳ����κ��Ż������ڳ���Ա���Գ���
// Release ��Ϊ�����汾���������ǽ����˸����Ż���ʹ�ó����ڴ����С�������ٶ��϶������ŵģ��Ա��û��ܺõ�ʹ��
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

//// Release ��Ϊ�����汾,�����˸����Ż�
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
//�ϵ㣨F9���ټ�F5��ֱ�������ϵ㴦
//F10�����
//F11�����
//shift+F11:��������
//ctrl+F5:ֱ������������������
//shift+F5:ֹͣ����

////���ö�ջ
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

////ʵ��һ��ʵ�ִ��룺�� 1��+2��+3�� ...+ n! �����������
////�����ϵ�
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);	//3 1��+2��+3!=1+2+6=9
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

//ʵ������
//ջ����Ĭ��ʹ�ã����øߵ�ַ�ռ䣬���õ͵�ַ�ռ�
//���������±����������ַ���ɵ͵��߱仯��
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