//入门题库->4.字符处理->1.字符串比较
//编写字符串比较函数 cmp
#include <stdio.h>
int cmp(char *str1, char *str2)
{
    while (*str1 == *str2 && *str1 != '\0')
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
int main()
{
    char s1[100] = "ABCDEF1";
    char s2[100] = "ABCDEF0";
    printf("字符串%s", cmp(s1, s2)?"不相等":"相等");
}
