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
//1.��ϰдһ���������n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	//i����ʼֵ,�ж�,ѭ��
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
//2.����n�Ľ׳˵ĺ�,��д��������Ǵ����.
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &n);
	//i����ʼֵ,�ж�,ѭ��
	for (n = 1; n <= 3; n++)
	{
		ret = 1;
		//��ȷ���޸Ĺ����ڴ˴���ret��ʼ��ret=1;ʹÿ��ret����ѭ��ʱ���Ǵ�һ��ʼ��
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;//bug�����ret��ÿ�ν���ѭ��֮��retֵ�Ա�����ret�в�û�г�ʼ��
		}
		sum = sum + ret;
	}//��Ƚ�����һ�ν���ڶ���ѭ��ret=1;
	//����ʱret=1*1
	//�ڶ��ν���ʱret=1
	//����ret=1*1*2
	//�����ν���ret=2
	//����ret=2*1*2*3
	//���Ĵν���ret=12
	//����.......
	printf("sum=%d\n", sum);
	return 0;
}






















