//入门题库->4.字符处理->10.字符替换
//编写字符替换函数 repch,将str字符串中出现的所有字符subch替换
#include <stdio.h>
void repch(char *str, char subch, char repch)
{
    while (*str)
    {
        if (*str == subch)
        {
            *str = repch;
        }
        str++;
    }
}
int main()
{
    char str[100] = "abcdefabcdefabcdef";
    repch(str, 'a', 'A');
    puts(str);
}
