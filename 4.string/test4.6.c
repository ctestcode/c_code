//入门题库->4.字符处理->6.字符统计
//编写字符统计函数 strchc,实现统计str字符串中指定字符出现的个数
#include <stdio.h>
int strchc(char *str, char c)
{
    int count = 0;
    while (*str)
    {
        if (*str == c)
        {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    printf("%d", strchc("AABCD123ABCD123ABCDA", 'A'));
}
