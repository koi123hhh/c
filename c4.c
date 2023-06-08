#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    float x, y;
    scanf("%f", & x);
    if (x > 0)
        y = 2 * x + 1;
    else if (x == 0)
        y = 0;
    else if (x < 0)
        y = -x - 1;
    printf("%.3f", y);





   /* int score;
    scanf("%d", &score);
    int s;

    if (score < 0 || score>100)
    {
        printf("Error!\n");
        scanf("%d", &score);
    }
    s = score / 10;
    switch (s)
    {
    case 6:
    case 7:
        printf("C");
        break;
    case 8:
        printf("B");
        break;
    case 9:
    case 10:
        printf("A");
        break;
    default:
        printf("Failed");
        break;
    }*/

	/*double a, b, c;
	float p, s;
	printf("请输入三角形的三边：");
	scanf("%lf%lf%lf", &a, &b, &c);
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		printf("能构成三角形。\n");
		printf("面积为：%f\n", s);
	}
	else
		printf("不能构成三角形。\n");*/
	return 0;
}