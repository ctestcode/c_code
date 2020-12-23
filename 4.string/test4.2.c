//入门题库->4.字符处理->2.字符串拷贝
//编写字符串拷贝函数 cpy
#include <stdio.h>

void cpy(char *dest, char *src)
{
    while (*dest++ = *src++);
}
int main()
{
    char s1[100] = "AABCD123ABCD123ABCDA";
    char s2[100] = "123";
    cpy(s1, s2);
    puts(s1);
}
