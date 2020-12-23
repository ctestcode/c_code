//入门题库->4.字符处理->3.字符串追加
//编写字符串追加函数 cat
#include <stdio.h>

void cat(char *dest, char *src)
{
    while (*dest++);
    dest--;
    while (*dest++ = *src++);
}

int main()
{
    char s1[100] = "AABCD123ABCD123ABCDA";
    char s2[100] = "123";
    cat(s1, s2);
    puts(s1);
}
