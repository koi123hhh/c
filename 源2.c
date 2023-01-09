#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//1.练习写一个代码计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	//i的起始值,判断,循环
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
//2.计算n的阶乘的和,该写法算出来是错误的.
/*int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &n);
	//i的起始值,判断,循环
	for (n = 1; n <= 3; n++)
	{
		//ret = 1;
		//正确的修改过程在此处将ret初始化ret=1;使每次ret进入循环时都是从一开始的
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;//bug这里的ret在每次结束循环之后ret值仍保存在ret中并没有初始化
		}
		sum = sum + ret;
	}//深度解析第一次进入第二层循环ret=1;
	//出来时ret=1*1
	//第二次进入时ret=1
	//出来ret=1*1*2
	//第三次进入ret=2
	//出来ret=2*1*2*3
	//第四次进入ret=12
	//出来.......
	printf("sum=%d\n", sum);
	return 0;
}*/
//写一个代码在arr数组中找到数字7
/*int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了,下标为:%d\n", i);
		}
	}
	if (i == sz);
	printf("没找到");
	return 0;
}*/
//折半查找算法/二分查找算法 速度更快;
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 7;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//4.编写代码,演示多个字符从两端移动,向中间汇集
int main()
{
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	//int right=sizeof(arr1)/sizeof(arr[0])-2//有\0的存在,且下标从0开始要减2
	int right = strlen(arr1) - 1;//strlen字符串的长度不加\0
	while (left > right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
	}
	return 0;
}


















