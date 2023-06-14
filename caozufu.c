#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 5 / 2;
//	float b = 5 / 2.0;
//	double c = 5 / 2.0;
//	printf("a=%d,b=%f,c=%lf", a,b,c);
//	return 0;
//}
//double a=5%2.0;会报错
//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
// 
//}
//交换两个变量的值，不使用中间变量。
//1.普通交换两个临时变量的值。
//int main()
//{
//	int a = 4;
//	int b = 5;
//	int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d", a, b);
//	return 0;
//}
//不创建临时变量1.加减法
//int main()//可能会溢出。
//{
//	int a = 4;
//	int b = 5;
//	a = a + b;//不太完善的地方，如果两个数比较大，相加之后可能会超出整形的最大值导致部分二进制位丢失。
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}
//2。异或的方法。不会溢出。
//int main()
//{
//	int a = 4;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	return 0;
//}
//求一个内存中存储二进制的位数。
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i;
//	scanf("%d", &num);
//	//操作符&的使用
//	for (i = 0;i < 32;i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
int main()
{
	int a = 0,b = 2,c = 3;
	int  i = a++ && b++ && c;
	int j = ++a && b;
	printf("%d%d", i, j);
	return 0;
}