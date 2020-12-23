//入门题库->4.字符处理->5.字符串长度
//编写字符串长度函数 len

#include <stdio.h>

int len(char *str)
{
    char *p = str;
    while (*str++);
    return str - 1 - p;
}

int main()
{
    printf("%d", len("AABCD123ABCD123ABCDA"));
}
