//入门题库->2.特殊数字->15.求数字(个位数遍历)
//15.求数字：输入一个整数n，输出100（含100）-999（含999）之间所有各位数字之和等于n的数。

#include <stdio.h>

void print_number(int n)
{
    int a, b, c, i;

    for (i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if (a + b + c == n)
            printf("%d,", i);
    }
}
int main()
{
    int n = 19; //输入一个整数n
    print_number(n);
}
