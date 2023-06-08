#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	double a, b, c, d;
	scanf("%lf %lf %lf", &a, &b, &c);
	d = (a + b + c) / 3;
	printf("%.1lf", d);
	return 0;
}