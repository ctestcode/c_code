//入门题库->4.字符处理->9.字符串删除
//编写字符串删除函数 delstr,实现删除str字符串中出现所有指定字符串
#include <stdio.h>
#include <string.h>
char *delstr(char *str, char *substr)
{
    char *pb = str, *q, *c;
    int n = strlen(substr);
    while (q = strstr(pb, substr))
    {
        c = q + n;
        *q = '\0';
        pb = strcat(pb, c);
    }
    return pb;
}

int main()
{
    char s1[100] = "AABCD123ABCD123ABCDA";
    char s2[100] = "ABCD";
    delstr(s1, s2);
    puts(s1);
}
