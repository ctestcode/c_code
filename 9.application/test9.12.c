//入门题库->9.实际应用->12.数字提取
//输入一个以回车为结束标志的字符串（少于10个字符），提取其中的所有数字字符，将其转换成一个十进制整数输出。
#include <stdio.h>
void print_digital(char *str)
{
    int i = 0, n = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            n = n * 10 + str[i] - '0';
        }
        i++;
    }
    printf("num=%d\n", n);
}
int main()
{
    char str[] = {"123456789"};
    print_digital(str);
}
