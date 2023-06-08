#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	float a[7];
//	float b, c;
//	int i;
//	for (i = 0;i < 7;i++)
//		scanf("%f", &a[i]);
//	for (i = 0;i < 7;i++)
//	{
//		if (a[i] < a[i + 1])
//		{
//			b = a[i];
//			a[i] = a[i + 1];
//			a[i + 1] = b;
//		}
//	}
//	c = (a[1] + a[2] + a[3] + a[4] + a[5]) / 5;
//	printf("%.2f", c);
//
//	return 0;
//}
//
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a < 20 && a>0 && a % 2 != 0)
	{
		int b[20][20];
		int i, j;
		int c = 0;
		int d = 0;
		int h = 0;
		for (i = 0;i < a;i++)
		{
			for (j = 0;j < a;j++)
			{
				scanf("%d", &b[i][j]);
			}
		}
		for (i = 0;i < a;i++)
		{
			j = i;
			c = c + b[i][j];
		}
		for (i = 0;i < a;i++)
		{
			j = a - i - 1;
			d = d + b[i][j];
		}
		if (c == d)
		{
			for (i = 0;i < a;i++)
			{
				int g = 0;
				for (j = 0;j < a;j++)
				{
					if (j != a)
					{
						g = g + b[i][j];
					}
				}
				if (c != g)
				{
					h++;
				}
			}
		}
		if (h == 0)
			printf("Yes");
		else
			printf("No");
	}
	else
		printf("No");

	return 0;
}













