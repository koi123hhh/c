#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	//判断一个数是否为奇数
	/*int n;
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("n不是奇数。");*/
	//输出1-100之间的奇数
	/*int i = 0;
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d ", i);
		i++;
	}*/
	//判断星期几
	/*int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1:printf("星期一");break;
	case 2:printf("星期二");break;
	}*/
	//在屏幕上打印1-10
	/*int i = 0;
	while (i <10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d", i);
	}*/
	/*int ret = 0;
	char password[20];
	printf("请输入密码：");
	scanf("%s",password);
	printf("请输入（Y/N）>");
	getchar();
	ret = getchar();
	if (ret == 'Y')
		printf("确认成功。");
	else
		printf("重新输入。");*/
	//用for循环打印1-10
	/*int i = 0;
	for (i = 1;i <= 10;i++)
	{
		if (i == 5)
			continue;
		printf("%d", i);
	}*/
	//打印数组中的数1-10；
	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < 10;i++)
		printf("%d", arr[i]);*/
	//do-while循环打印1-10
	/*int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d", i);
		i++;
	}
	while (i <= 10);*/
	//计算n的阶乘
	/*int i = 1;
	int sum=1;
	int n;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);*/
	//计算1-10阶乘求和
	/*int i = 1;
	int sum = 1;
	int n;
	int ret=0;
	for (n = 1;n <= 10;n++)
	{
		sum = 1;
		for (i = 1;i <= n;i++)
		{
			sum = sum * i;
		}
		ret = ret + sum;
	}
	printf("%d", ret);*/
	//编写代码，演示多个字符从两端移动，向中间汇总。
	//char arr1[] = "welcome to bit!!!!!!";
	//char arr2[] = "####################";
	//int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	////int right=strlen(arr)-1;需要引入头文件#include<string>
	//while (left <=right)//条件成立接着执行，条件不成立不执行；
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	left++;
	//	right--;
	//}
//三个数将代码从大到小进行输出,//先找出最大值放入a中，在比较剩余两个数的大小，大的放b，小的放c
//int a, b, c;
//int n;
//scanf("%d%d%d", &a, &b, &c);
//if (a < b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//if (a < c)
//{
//	int temp = a;
//	a = c;
//	c = temp;
//}
//if (b < c)
//{
//	int temp = b;
//	b = c;
//	c = temp;
//}
//printf("%d%d%d\n", a, b, c);
	//
//打印1-100之间所有的3的倍数的数字
//int i = 0;
//for (i = 1;i <= 100;i++)
//{
//	if (i % 3 == 0)
//		printf("%d ", i);
//}
//给定两个数，求最大公约数。辗转相除法
//int m;
//int n;
//int r;
//scanf("%d%d", &m, &n);
//while (m%n)
//{
//	r = m % n;
//	m = n;
//	n = r;
//}
//printf("%d", n);

//打印1000-2000年的闰年；
//int year = 0;
//int count = 0;
//for (year = 1000;year <= 2000;year++)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d ", year);
//		count++;
//	}
//}
//printf("%d", count);
//



	/*int age = 10;
	if (age < 18)
		printf("weichengnian.");
	else if (age >= 18 && age < 40)
		printf("qingnian.");
	else if (age >= 40 && age < 60)
		printf("zhuangnian.");
	else
		printf("laonian");*/
		/*return 0;
}*/
//正负数交错求和；
//int main()
//{
//	/*int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf ", sum);
//	return 0;*/
//	//求10个数中的最大值；
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	//int i=0;
//	//int max = 0;//总感觉中间缺少一个比较值的时候，不妨定义一个最大值，将该值与数组中的值分别进行比较，替换max;
//	//for (i = 0;i <=9;i++)
//	//{
//	//	if (arr[i] > max)
//	//		max = arr[i];
//	//}
//	//printf("max=%d ", arr[i-1]);
//	/*return 0;*/
//}
//在屏幕上输出99乘法表；
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ji = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			ji = i * j;
//			printf("%d*%d=%d ", i, j, ji);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//写一个函数，找出的最大值
int Max(a, b)
{
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int max;
	int a, b;
	scanf("%d%d", &a,&b);
	max = Max(a, b);
	printf("%d", max);
	return 0;
}
