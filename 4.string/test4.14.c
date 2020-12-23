//入门题库->4.字符处理->14.库函数strlen
//14.输入多个字符串，输出其中最长的第一个字符串。

#include <stdio.h>
#include <string.h>

void print_compare_len(char *str1, char *str2)
{
    if (strlen(str1) >= strlen(str2))
        puts(str1);
    else
        puts(str2);
}
int main()
{
    char str1[100] = {"1234567890"};
    char str2[100] = {"123456789"};
    print_compare_len(str1, str2);
}
