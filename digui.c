#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����������
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 34)));
//	return 0;
//}
//�����ĵݹ�--��ӡһ�����ĸ���λ������
//void sunshu(int sum)
//{
//	if (sum > 9)//�ݹ��������������
//	{
//		sunshu( sum / 10);//�����ڲ����ú������������sum/10�ٴη��뺯���ڲ������е��á�
//	}
//	printf("%d ", sum % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	sunshu(num);//���ú���
//	return 0;
//}

//��������ʱ���������ַ������ȣ�
//�������(1)��򵥵�
//#include<string.h>
//int main()
//{
//	char arr[] = "liuhanyueshigou";
//	int len = strlen(arr);//����ʱ����
//	printf("%d", len);
//	return 0;
//}
//Ҫ��д�ĳ���Ĺ�����ʵ��strlen�Ĺ���
//����������ʵ�֣�2��
//int jishu(char* arr)//���鴫�ν�ȥ���׸�Ԫ�صĵ�ַ
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
//	printf("len=%d ", len);//��ȻҲ����ֱ��д����
//
//	return 0;
//}
//ʹ�ú����ĵݹ鷽����ʵ�֣�3�����м䲻��������������
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
//	printf("�������ܺͷֱ�Ϊ%d %d\n", a, sum);
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
//	printf("��������ݣ�");
//	scanf("%d", &year);
//	for (int i = 1;i <= 12;i++)
//	{
//		printf("%d��%d����%d��\n", year, i, month(year, i));
//	}
//
//	return 0;
//}

//��n�Ľ׳�
//�������
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
//������� �������ʹ����ѭ��
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
////�ݹ��ʹ��
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
//����n��쳲���������//ʹ�ú����ݹ�ķ���
//int main()
//{
//
//	return 0;
//}



















































































//�ϻ�ʵ�鱨��-ָ���Ӧ��һ
//������ʵ��
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
	printf("������10��������\n");
	for (int i = 0;i <= 10;i++)
	{
		scanf("%d", a[i]);
	}
	max_min(a, 10, &max, &min);
	printf("\n���ֵ�ǣ�%d\n", max);
	printf("��Сֵ�ǣ�%d\n", min);
	return 0;
}