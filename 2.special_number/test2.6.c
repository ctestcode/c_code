//入门题库->2.特殊数字->6.水仙花数
//6.水仙花数：输出100-999之间所有的水仙花数。

#include <stdio.h>
void print_daffodil()
{
    int i, g, s, b;
    for (i = 100; i <= 999; i++)
    {
        g = i % 10;
        s = i / 10 % 10;
        b = i / 100;
        if (g * g * g + s * s * s + b * b * b == i)
            printf("%d,", i);
    }
}
int main()
{
    print_daffodil();
}
