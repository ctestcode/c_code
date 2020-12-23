//入门题库->4.字符处理->12.字符查找
//编写字符查找函数 strch,如果指定字符是str字符串的元素，返回元素所在的首地址，否则，返回NULL。

#include <stdio.h>
char *strch(char *str, char c)
{
    while (*str)
    {
        if (*str == c)
        {
            return str;
        }
        str++;
    }
    return NULL;
}
int main()
{
    char s1[100] = "AABCD123ABCD123ABCDA";
    char c = '1';
    printf("%s", strch(s1, c));
}
