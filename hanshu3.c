#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�õݹ��ѭ����n�Ľ׳�
//int main()
//{
//	int n;
//	int i = 0;
//	scanf("%d", &n);
//	int sum = 1;
//	for (i = 1;i <= n;i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int jiecheng(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * jiecheng(n - 1);
//}
//int main()
//{
//	int n;
//	int sum;
//	scanf("%d", &n);
//	sum = jiecheng(n);
//	printf("%d", sum);
//	return 0;
//}
//��쳲���������--�õݹ�ȽϺ�ʱ�䣬���鷳���뷱��
//feibonaqie(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return feibonaqie(n - 1) + feibonaqie(n - 2);
//}
//��ѭ����쳲���������
//feibonaqie(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//}
//int main()
//{
//	int n;
//	int sum;
//	scanf("%d", &n);
//	sum = feibonaqie(n);
//	printf("%d", sum);
//	return 0;
//}
//����Ĵ���1.һά����Ĵ���
#include <string.h>
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char arr1[] = "abcdef";
//	printf("%d\n", sizeof(arr1));
//	printf("%d", strlen(arr1));
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}
//int main()
//{
//	//����ķ���
//	char arr[6] = "abcdef";
//	int i = 0;
//	for (i = 0;i < 6;i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		printf("&arr[%d]=%p \n", i, &arr[i]);
//	}
//	return 0;
//}

//ð�ݷ��������ڲ�Ԫ�ؽ�����������
//void maopo(int arr[], int sz)
//{
//	int i = 0;
//	//��ȷ��ð�ݵ�����
//	for (i = 0;i < sz-1;i++)
//	{
//		int j = 0;
//		//������Ż���
//		int flag = 1;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j+1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;	
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	maopo(arr, sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
// }
//
int main()
{
	int arr[] = {1,2,3,4,5};
	printf("%p\n", arr);
	printf("%p\n",&arr[0]);
	printf("%d\n", *arr);
	return 0;
}
