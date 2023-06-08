#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int n = 0, t = 0, a = 0, b = 0, c = 0, j, max = 0, min = 0;
	scanf("%d", &n);
	while (n != 495 || t == 0) 
	{       
		a = n / 100;
		b = (n % 100) / 10;
		c = n % 10;
		if (a < b) { j = a;a = b;b = j; }
		if (a < c) { j = a;a = c;c = j; }
		if (b < c) { j = b;b = c;c = j; }
		max = a * 100 + b * 10 + c;
		min = c * 100 + b * 10 + a;
		n = max - min;
		printf("%d: %d - %d = %d\n", ++t, max, min, n);
	}














	/*int n;
	scanf("%d", &n);
	int num, i, min;
	scanf("%d", &num);
	min = num;
	for (i = 1; i < n; i++) 
	{
		scanf("%d", &num);
		if (min > num) 
		{
			min = num;
		}
	}
	printf("min = %d\n", min);
*/














	/*int a, b;
	float n;
	scanf("%f", &n);
	for (a = 0;a <= n;a++)
	{
		b = (n - a * 1.5) / 1;
		if (1.5 * a + b == n && a >= 0 && b >= 0)
			printf("%d %d\n", b, a);
	}*/
	return 0;
}


















//int main()
//{
//    int n;
//    scanf("%d", &n);
//    getchar();
//    for (int i = 0; i < n; i++)
//    {
//        char str[1001];
//        fgets(str, 1001, stdin);
//        int l = strlen(str) - 1;
//        char max = str[0];
//        for (int j = 0; j < l; j++)
//        {
//            if (str[j] > max)
//            {
//                max = str[j];
//            }
//        }
//        printf("%d  %c\n", l, max);
//    }
//    return 0;
//}
