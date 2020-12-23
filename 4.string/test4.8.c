//入门题库->4.字符处理->8.字符删除
//编写字符删除函数 delch,实现删除str字符串中出现所有指定字符
#include <stdio.h>
void delch(char *str, char c)
{
    char *p = str;
    while (*str)
    {
        if (*str != c)
        {
            *p++ = *str;
        }
        str++;
    }
    *p = '\0';
}
int main()
{
    char s1[100] = "AABCD123ABCD123ABCDA";
    char c = 'A';
    delch(s1, c);
    puts(s1);
}
