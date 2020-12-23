//入门题库->1.递归调用->11.逆序输出数字
//11.逆序输出：输入一个正整数，将该正整数逆序输出。

#include <stdio.h>

void printDigit(int n)
{
    printf("%d", n % 10);
    if (n > 10)
    {
        printDigit(n / 10);
    }
}

int main()
{
    int n=12345678; //输入一个正整数
    printDigit(n);
}
