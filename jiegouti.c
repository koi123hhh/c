#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int ss;
    struct time {
        int h, m, s;
    };
    struct time s1;

    scanf("%d:%d:%d", &s1.h, &s1.m, &s1.s);
    scanf("%d", &ss);

    s1.s = s1.s + ss;
    if (s1.s >= 60) {
        s1.m = s1.s / 60 + s1.m;
        s1.s = s1.s % 60;
    }
    if (s1.m >= 60) {
        s1.h = s1.m / 60 + s1.h;
        s1.m = s1.m % 60;
    }
    if (s1.h >= 24) {
        s1.h = s1.h % 24;
    }
    printf("%d:%d:%d", s1.h, s1.m, s1.s);

}






