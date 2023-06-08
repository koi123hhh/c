#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int max_min(int a[], int n, int* max, int* min)
//{
//	int* p;
//	*max = *min = *a;
//	for (p = a + 1; p < a + n; p++)
//	{
//		if (*p > *max)
//		{
//			*max = *p;			
//		}
//		else if (*p < *min)
//		{
//			*min = *p;			
//		}
//	}
//	return 0;
//}
//int main(void)
//{
//	int a[10];
//	int max, min;
//	printf("请输入10个整数：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);		
//	}
//	max_min(a, 10, &max, &min);		
//
//	printf("最大值是：%d\n", max);
//	printf("最小值是：%d\n", min);
//
//	return 0;
//}
//#include <string.h>
//#define H 30
//#define N 6
//int stu;
//int main() 
//{
//    void average(float score[N][N]);
//    void find1(float score[N][N]);
//    void find2(float score[N][N]);
//    char course[N][H], (*p)[H] = course;
//    float score[N][N], (*q)[N] = score;
//    int i, j;
//    strcpy(course[0], "学号");
//    printf("请输入%d个课程名: ", N - 1);
//    for (i = 1;i < N;i++) 
//    {
//        scanf("%s", p[i]);
//    }
//    printf("请输入要统计的人数: ");
//    scanf("%d", &stu);
//    for (i = 0;i < stu;i++) 
//    {
//        for (j = 0;j < N;j++) 
//        {
//            if (j == 0) 
//            {
//                printf("========================\n");
//                printf("请输入第%d个同学的学号:", i + 1);
//                scanf("%f", q[i] + 0);
//            }
//            else {
//                printf("请输入%s的成绩:", p[j]);
//                scanf("%f", q[i] + j);
//            }
//        }
//    }
//    printf("=============================\n");
//    for (i = 0;i < N;i++) 
//    {
//        printf("%s  ", p[i]);
//    }
//    printf("\n");
//    for (i = 0;i < stu;i++) 
//    {
//        for (j = 0;j < N;j++) 
//        {
//            if (j == 0)
//                printf("%2.0f ", *(q[i] + j));
//            else  
//                printf("%.2f  ", *(q[i] + j));
//        }
//        printf("\n");
//    }
//    average(score);
//    find1(score);
//    find2(score);
//    return 0;
//}
////求第一门课程的平均成绩
//void average(float score[N][N]) {
//    float num = 0;
//    float(*p1)[N] = score;
//    float aver;
//    for (int i = 0;i < stu;i++) {
//        num += *(*(p1 + i) + 1);
//    }
//    aver = num / stu;
//    printf("=============================\n");
//    printf("第一门课程的平均成绩aver=%.2f\n", aver);
//}
////找出两门以上课程成绩不及格的学生
//void find1(float score[N][N]) {
//    float(*p2)[N] = score;
//    int num[N] = {0}, i, j;
//    for (i = 0;i < stu;i++) 
//    {
//        for (j = 1;j < N;j++) 
//        {
//            if (*(*(p2 + i) + j) < 60) 
//            {
//                num[i]++;
//            }
//        }
//    }
//    printf("=============================\n");
//    printf("不及格的学生的学号及成绩如下:\n");
//    for (i = 0;i < stu;i++) 
//    {
//        if (num[i] > 2) {
//            for (j = 0;j < N;j++) {
//                if (j == 0)
//                    printf("%.0f ", *(*(p2 + i) + j));
//                else 
//                    printf("%.2f  ", *(*(p2 + i) + j));
//            }
//        }
//    }
//    printf("\n");
//}
////找出平均成绩在90分以上或者每科都大于85的
//void find2(float score[N][N]) 
//{
//    float(*p3)[N] = score;
//    int num1[N] = {0}, i, j;
//    float num2[N] = {0};
//    for (i = 0;i < stu;i++) 
//    {
//        for (j = 1;j < N;j++) 
//        {
//            if (*(*(p3 + i) + j) > 85) 
//            {
//                num1[i]++;
//            }
//            num2[i] += *(*(p3 + i) + j);
//        }
//        num2[i] = num2[i] / (N - 1);
//    }
//    printf("符合要求的学生的学号及成绩如下:\n");
//    for (i = 0;i < stu;i++) 
//    {
//        if (num1[i] == N - 1 || num2[i] > 90) 
//        {
//            for (j = 0;j < N;j++) 
//            {
//                if (j == 0)
//                    printf("%.0f ", *(*(p3 + i) + j));
//                else 
//                    printf("%.2f ", *(*(p3 + i) + j));
//            }
//        }
//    }
//}
/*#include <stdio.h>
void strmcpy(char *s, char *t, int m);
int main()
{    
	char t[] = "happy new year";    
	char s[20];    
	int m = 7;    
	strmcpy(s, t, m);    
	printf("%s\n", s);    
	return 0;
}
void strmcpy(char *s, char *t, int m)
{    
	int i = m - 1;    
	while (t[i] != '\0') 
	{        
		*s++ = t[i++];    
	}    
	*s = '\0';*/
//}


//char* cat(char* a, char* b);
//void main() {
//    char a[100], b[100];
//    gets(a);
//    gets(b);
//    cat(a, b);
//    puts(a);
//
//}
//char* cat(char* a, char* b) {
//    int i = 0;
//    while (*(a + i) != '\0') {
//        ++i;
//    }
//
//    int j = 0;
//    while (*(b + j) != '\0') {
//        *(a + i + j) = *(b + j);
//        ++j;
//    }
//    *(a + i + j) = '\0';
//    return a;
//
//}
#/*include <stdio.h>
int main()
{
    int n, i, j;
    struct book {
        char name[100];
        double price;
    };
    struct book books[10];
    struct book temp = books[0];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %lf", books[i].name, &books[i].price);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (books[i].price > books[j].price) {
                temp = books[i];books[i] = books[j];books[j] = temp;
            }
        }
    }
    printf("%.2f,%s", books[0].price, books[0].name);
    printf("\n");
    printf("%.2f,%s", books[n - 1].price, books[n - 1].name);
}
*/
#include <stdio.h>
#define N 11
struct student {
    int  num;
    char name[10];
    int  score;
};
int main()
{
    int i, n, sum = 0;
    double x;      
    struct student s[N];
    printf("n");
    scanf("%d", &n);
    for (i = 0;i < n;i++)
    {
        scanf("%d%s%d", &s[i].num, s[i].name, &s[i].score);
        sum += s[i].score;
    }
    x = (double)sum / n;
    printf("The average score is:%.2f", x);
    return 0;
}

