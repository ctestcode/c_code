//入门题库->10.图形输出->9.输出实心菱形
#include <stdio.h>
void print_shape()
{
    /*n：代表菱形边长*/
    int i, j, n = 5;
    /*打印上三角*/
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (2 * n - 1); j++)
        {
            if (j >= n + 1 - i && j <= n - 1 + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    /*打印下三角*/
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= (2 * n - 1); j++)
        {
            if (j >= i + 1 && j <= (2 * n - 1) - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    print_shape();
}