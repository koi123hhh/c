#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 5 / 2;
//	float b = 5 / 2.0;
//	double c = 5 / 2.0;
//	printf("a=%d,b=%f,c=%lf", a,b,c);
//	return 0;
//}
//double a=5%2.0;�ᱨ��
//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
// 
//}
//��������������ֵ����ʹ���м������
//1.��ͨ����������ʱ������ֵ��
//int main()
//{
//	int a = 4;
//	int b = 5;
//	int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d", a, b);
//	return 0;
//}
//��������ʱ����1.�Ӽ���
//int main()//���ܻ������
//{
//	int a = 4;
//	int b = 5;
//	a = a + b;//��̫���Ƶĵط�������������Ƚϴ����֮����ܻᳬ�����ε����ֵ���²��ֶ�����λ��ʧ��
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}
//2�����ķ��������������
//int main()
//{
//	int a = 4;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	return 0;
//}
//��һ���ڴ��д洢�����Ƶ�λ����
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i;
//	scanf("%d", &num);
//	//������&��ʹ��
//	for (i = 0;i < 32;i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
int main()
{
	int a = 0,b = 2,c = 3;
	int  i = a++ && b++ && c;
	int j = ++a && b;
	printf("%d%d", i, j);
	return 0;
}