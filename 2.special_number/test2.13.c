//入门题库->2.特殊数字->13.求数字(逆序相等的数)
//13.求数字：求所有的四位数中，原数的9倍与其逆序相等的数。

#include <stdio.h>
void find_number()
{
    int i, a, b, c, d;
    for (i = 1000; i <= 9999; i++)
    {
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;
        d = i / 1000;
        if (9 * i == a * 1000 + b * 100 + c * 10 + d)
            printf("%d", i);
    }
}

int main()
{
    find_number();
}
