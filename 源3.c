#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//4.��д����,��ʾ����ַ��������ƶ�,���м�㼯
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right=sizeof(arr1)/sizeof(arr[0])-2//��\0�Ĵ���,���±��0��ʼҪ��2
//	int right = strlen(arr1) - 1;//strlen�ַ����ĳ��Ȳ���\0
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
//5.ģ���û������龰,����ֻ�ܵ�������(������ȷ����ɹ�,���������˳�����)
int main()
{
	int i = 0;
	char arr[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", arr);
		if (strcmp(arr, "123456")==0)
		//	if (arr =="123456")//==���������Ƚ������ַ����Ƿ����;��Ҫ���ÿ⺯��strcmp ͷ�ļ���Ȼ��string
		{
			printf("������ȷ.");
			break;
		}
	}
	if (i == 3)
		printf("����������������,�˳�����.");
	return 0;
}





















