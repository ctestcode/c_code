//入门题库->1.递归调用->12.逆序输出字符
//12.逆序输出字符：输入一个正整数，将该正整数逆序输出。

#include <stdio.h>

void printStr(char *str)
{
    if (*str != '\0')
        printStr(str + 1);
    if (*str != '\0')
        printf("%c", *str);
}

int main()
{
    char str[100]={"!doog yrev si edoctsetc"};
    printStr(str);
}
