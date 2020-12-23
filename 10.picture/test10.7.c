//入门题库->10.图形输出->7.打印乘法口诀表。
#include <stdio.h>
void print_shape()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d * %d = %-5d", i, j, i * j);
        if (i != 9)
            printf("\n");
    }
}
int main()
{
    print_shape();
}