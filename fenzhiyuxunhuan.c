#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	//�ж�һ�����Ƿ�Ϊ����
	/*int n;
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("n����������");*/
	//���1-100֮�������
	/*int i = 0;
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d ", i);
		i++;
	}*/
	//�ж����ڼ�
	/*int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1:printf("����һ");break;
	case 2:printf("���ڶ�");break;
	}*/
	//����Ļ�ϴ�ӡ1-10
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
	printf("���������룺");
	scanf("%s",password);
	printf("�����루Y/N��>");
	getchar();
	ret = getchar();
	if (ret == 'Y')
		printf("ȷ�ϳɹ���");
	else
		printf("�������롣");*/
	//��forѭ����ӡ1-10
	/*int i = 0;
	for (i = 1;i <= 10;i++)
	{
		if (i == 5)
			continue;
		printf("%d", i);
	}*/
	//��ӡ�����е���1-10��
	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < 10;i++)
		printf("%d", arr[i]);*/
	//do-whileѭ����ӡ1-10
	/*int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d", i);
		i++;
	}
	while (i <= 10);*/
	//����n�Ľ׳�
	/*int i = 1;
	int sum=1;
	int n;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);*/
	//����1-10�׳����
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
	//��д���룬��ʾ����ַ��������ƶ������м���ܡ�
	//char arr1[] = "welcome to bit!!!!!!";
	//char arr2[] = "####################";
	//int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	////int right=strlen(arr)-1;��Ҫ����ͷ�ļ�#include<string>
	//while (left <=right)//������������ִ�У�������������ִ�У�
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	left++;
	//	right--;
	//}
//������������Ӵ�С�������,//���ҳ����ֵ����a�У��ڱȽ�ʣ���������Ĵ�С����ķ�b��С�ķ�c
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
//��ӡ1-100֮�����е�3�ı���������
//int i = 0;
//for (i = 1;i <= 100;i++)
//{
//	if (i % 3 == 0)
//		printf("%d ", i);
//}
//�����������������Լ����շת�����
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

//��ӡ1000-2000������ꣻ
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
//������������ͣ�
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
//	//��10�����е����ֵ��
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	//int i=0;
//	//int max = 0;//�ܸо��м�ȱ��һ���Ƚ�ֵ��ʱ�򣬲�������һ�����ֵ������ֵ�������е�ֵ�ֱ���бȽϣ��滻max;
//	//for (i = 0;i <=9;i++)
//	//{
//	//	if (arr[i] > max)
//	//		max = arr[i];
//	//}
//	//printf("max=%d ", arr[i-1]);
//	/*return 0;*/
//}
//����Ļ�����99�˷���
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
//дһ���������ҳ������ֵ
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
