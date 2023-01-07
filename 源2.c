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
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &n);
	//i的起始值,判断,循环
	for (n = 1; n <= 3; n++)
	{
		ret = 1;
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
}






















