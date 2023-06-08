#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define N 10
void fun(int a[], int n)
{
    int l = 0, r = n - 1;
    while (l < r)

    {

        int tmp = a[l];

        a[l++] = a[r];

        a[r--] = tmp;

    }
}
int main()
{
    int a[N] = { 34,56,4,1,10,8,6,5,4,1 }, i;
    for (i = 0;i < N;i++)
        printf("%3d", a[i]);
    printf("\n");
    fun(a, N);
    for (i = 0;i < N;i++)
        printf("%3d", a[i]);
    return 0;
}



//int digitA(int n, int k) //n是数字 k是位数
//{
//	int count = 0, copy = n, i;
//	while (copy % 10)
//	{
//		copy = copy / 10;
//		count++;
//	}
//	if (count < k)
//		return -1;
//	else
//	{
//		while (--k)
//		{
//			n = n / 10;
//		}
//		return (n % 10);
//	}
//}
//int main()
//{
//	int n, k, a;
//	scanf("%d", &n);
//	scanf("%d", &k);
//	a = digitA(n, k);
//	printf("%d\n", a);
//	return 0;
//}


//#include<string.h>
//void main() {
//	char c[80], a[80];
//	int i = 0, j = 0, b[80], m = 0;
//	while ((c[i] = getchar()) != '\n') {  //去掉非十六进制 
//		if ((c[i] >= 'a' && c[i] <= 'f') || (c[i] >= 'A' && c[i] <= 'F') || (c[i] >= '0' && c[i] <= '9'))
//			a[j++] = c[i++];
//	}
//	a[j] = '\0';
//	printf("%s\n", a);
//	i = 0;
//	while (a[i] != '\0') {    //将十六进制转换为整数 
//		if (a[i] >= 'a' && a[i] <= 'z')
//			b[i] = a[i] - 'a' + 10;
//		if (a[i] >= 'A' && a[i] <= 'Z')
//			b[i] = a[i] - 'A' + 10;
//		if (a[i] >= '0' && a[i] <= '9')
//			b[i] = a[i] - '0';
//		i++;
//	}
//	for (j = 0;j < i;j++) //将十六进制转换为十进制 
//		m = m * 16 + b[j];
//	printf("%d", m);
//}

//int arr1[100] = { 0 };
//int arr2[100] = { 0 };
//int k = 0;
//int main()
//{
//    int n, x;
//    printf("请输入整数n:\n");
//    scanf("%d", &n);
//    printf("请依次输入%d个数\n", n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    printf("请输入要插入的数字x：\n");
//    scanf("%d", &x);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr1[i] > x)  k = i;
//    }
//    printf("下标k=%d\n", k);
//    for (int i = k, j = 0; i < n; i++, j++)
//    {
//        arr2[j] = arr1[k];
//    }
//    arr1[k] = x;
//    for (int i = 0, j = k + 1; i < n + 1; i++, j++)
//    {
//        arr1[j] = arr2[i];
//    }
//    for (int i = 0;i < n + 1;i++)
//        printf("%d\t", arr1[i]);
//    return 0;
//}

