#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����һ���������������ֵ
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
//дһ�����������������α�����
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
//Ҳ������ָ������ҵ�a�ĵ�ַ���Ҷ�a���н����ò������ı�a��ֵ
//int main()
//{
//	int a = 0;
//	int* pa= &a;//&a��ָ�������
//	*pa = 20;//��a��ֵ���н����ò�������
//	printf("%d ", a); 
//	return 0;
//}
//дһ�������ж�һ�����ǲ�������
//����������1��������������0��
//int is_prime(int n)
//{ 
//	int j;
//	for (j = 2;j < n;j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//			break;
//		}//һ��Ҫע��if��������ж�����֧��䣬һ��һ��Ҫ��{}��
//	}
//	if (j == n)
//		return 1; 
//}
//int main()
//{
//	//��ӡ100-200֮���������
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//�ж��Ƿ�Ϊ����
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
//		//�ж��Ƿ�Ϊ����
//		if (is_runnian(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}
//�������������---������дһ��������ʵ��һ�������������еĲ���**
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
//		printf("�Ҳ���ָ��������");
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
//		printf("�Ҳ���ָ��������");
//	else
//		printf("%d ",k);
//	return 0;
//}
