#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数和链接
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 34)));
//	return 0;
//}
//函数的递归--打印一个数的各个位的数字
//void sunshu(int sum)
//{
//	if (sum > 9)//递归必须有限制条件
//	{
//		sunshu( sum / 10);//函数内部调用函数，在这里把sum/10再次放入函数内部，进行调用。
//	}
//	printf("%d ", sum % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	sunshu(num);//调用函数
//	return 0;
//}

//不创建临时变量，求字符串长度；
//正常求解(1)最简单的
//#include<string.h>
//int main()
//{
//	char arr[] = "liuhanyueshigou";
//	int len = strlen(arr);//有临时变量
//	printf("%d", len);
//	return 0;
//}
//要编写的程序的功能是实现strlen的功能
//创建函数来实现（2）
//int jishu(char* arr)//数组传参进去是首个元素的地址
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = jishu(arr);
//	printf("len=%d ", len);//当然也可以直接写函数
//
//	return 0;
//}
//使用函数的递归方法来实现（3），中间不创建其他变量。
//int jishu(char* arr)
//{
//
//
//}
//
//
//int main()
//{
//	char arr[] = "nihao";
//	printf("%d ", jishu(arr));
//	return 0;
//}
//int main()
//{
//	int m, n;
//	int i;
//	int a = 0;
//	int sum = 0;
//	scanf("%d%d", &m, &n);
//	if (m <= 1 || n > 500 || m > n)
//	{
//		printf("false");
//	}
//	else
//	{
//		for (i = m;i <= n;i++)
//		{
//			int k;
//			int isprime = 1;
//			for (k = 2;k < i - 1;k++)
//			{
//				if (i % k == 0)
//				{
//					isprime = 0;
//					break;
//				}
//			}
//			if (isprime)
//			{
//				a++;
//				sum += i;
//			}
//		}
//	}
//	printf("个数和总和分别为%d %d\n", a, sum);
//	return 0;
//}
//int month(int year, int month)
//{
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//	{
//		return 29;
//	}
//	else
//	{
//		return days[month];
//	}
//}
//int main()
//{
//	int year;
//	printf("请输入年份：");
//	scanf("%d", &year);
//	for (int i = 1;i <= 12;i++)
//	{
//		printf("%d年%d月有%d天\n", year, i, month(year, i));
//	}
//
//	return 0;
//}

//求n的阶乘
//常规求解
//int main()
//{
//	int n = 1;
//	scanf("%d", &n);
//	int sum=1;
//	int i = 0;
//	for (i = 1;i <= n;i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//函数求解 迭代求解使用了循环
//int jiecheng1(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1;i <= n;i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
////递归的使用
//int jiecheng2(int n)
//{
//	if (n ==1 )
//		return 1;
//	else
//		return n * jiecheng2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
////	sum = jiecheng1(n);
//	sum = jiecheng2(n);
//	printf("%d", sum);
//	return 0;
//}
//计算n个斐波那契数列//使用函数递归的方法
//int main()
//{
//
//	return 0;
//}



















































































//上机实验报告-指针的应用一
//函数的实现
int max_min(int a[], int n,int* max, int* min)
{
	int* p;
	*max = *min = *a;
	for (p = a + 1;p < a + n;p++)
	{
		if (*p>*max)
		{
			*max = *p;
		}

		else if (*p < *min)
		{
			*min = *p;
		}
	}
	return 0;
}
int main()
{
	int a[10];
	int max,min;
	printf("请输入10个整数：\n");
	for (int i = 0;i <= 10;i++)
	{
		scanf("%d", a[i]);
	}
	max_min(a, 10, &max, &min);
	printf("\n最大值是：%d\n", max);
	printf("最小值是：%d\n", min);
	return 0;
}