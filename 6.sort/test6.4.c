//入门题库->6.排序算法->4.字符串排序
#include <stdio.h>
#include <string.h>
#define N 4
void sortStrList(char s[N][100])
{
    int i, j;
    char t[100];
    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1 - i; j++)
            if (strcmp(s[j], s[j + 1]) > 0)
            {
                strcpy(t, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], t);
            }
}
int main()
{
    int i, j;
    char s[N][100]={"abc","aba","aaa","acc"};
    sortStrList(s);
    for (i = 0; i < N; i++)
        puts(s[i]);
}
