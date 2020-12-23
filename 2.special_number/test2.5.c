//入门题库->2.特殊数字->5.回文数
//5.回文数：输出100-999之间所有的回文数。

#include <stdio.h>
void print_palindrome()
{
    int i, g, b;
    for (i = 100; i <= 999; i++)
    {
        g = i % 10;
        b = i / 100;
        if (g == b)
            printf("%d,", i);
    }
}

int main()
{
    print_palindrome();
}
