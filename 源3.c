#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//4.编写代码,演示多个字符从两端移动,向中间汇集
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right=sizeof(arr1)/sizeof(arr[0])-2//有\0的存在,且下标从0开始要减2
//	int right = strlen(arr1) - 1;//strlen字符串的长度不加\0
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}
//5.模拟用户输入情景,并且只能登入三次(密码正确输入成功,错误三次退出程序)
int main()
{
	int i = 0;
	char arr[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", arr);
		if (strcmp(arr, "123456")==0)
		//	if (arr =="123456")//==不能用来比较两个字符串是否相等;需要调用库函数strcmp 头文件依然是string
		{
			printf("输入正确.");
			break;
		}
	}
	if (i == 3)
		printf("三次密码均输入错误,退出程序.");
	return 0;
}





















