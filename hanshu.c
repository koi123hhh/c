#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//定义一个函数求函数的最大值
//int get_max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//
//	return 0;
//}
//写一个函数交换两个整形变量；
//void jiaohuan(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a=%d b=%d", a, b);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	jiaohuan(a, b);
//
//	return 0;
//}
//也可以用指针变量找到a的地址并且对a进行解引用操作，改变a的值
//int main()
//{
//	int a = 0;
//	int* pa= &a;//&a的指针变量；
//	*pa = 20;//对a的值进行解引用操作；、
//	printf("%d ", a); 
//	return 0;
//}
//写一个函数判断一个数是不是素数
//是素数返回1；不是素数返回0；
//int is_prime(int n)
//{ 
//	int j;
//	for (j = 2;j < n;j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//			break;
//		}//一定要注意if后面如果有多条分支语句，一定一定要加{}；
//	}
//	if (j == n)
//		return 1; 
//}
//int main()
//{
//	//打印100-200之间的素数；
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//判断是否为闰年
//int is_runnian(int i)
//{
//	if ((i % 4 == 0 & i % 100 != 0) || (i % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		//判断是否为闰年
//		if (is_runnian(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}
//这个程序有问题---？？？写一个函数，实现一个整形有序数列的查找**
//int zhaoshu(int arr1[], int i)
//{
//	int j = 0;
//	int n = sizeof(arr1) / sizeof(arr1[0])-1;
//	int a = -1;
//	for (j = 0;j <= n;j++)
//	{
//		if (arr1[j] == i)
//		{
//			i == j;
//			a = 0;
//			return j;
//			break;
//		}
//	}
//	if (a == -1)
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int ret=zhaoshu(arr, k);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字");
//	}
//	else
//	{
//		printf("%d ", k);
//	}
//	return 0;
//}
//int erfenchazhao(int arr[],int k,int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left > right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid - 1;
//		else if (arr[mid] > k)
//			right = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = erfenchazhao(arr, k,sz);
//	if (ret == -1)
//		printf("找不到指定的数字");
//	else
//		printf("%d ",k);
//	return 0;
//}
