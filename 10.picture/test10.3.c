//入门题库->10.图形输出->3.右上三角
#include <stdio.h>
void print_shape()
{
    int i, j;
    for (i = 10; i >= 1; i--)
    {
        for (j = 1; j <= 10 - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        if (i != 1)
            printf("\n");
    }
}
int main()
{
    print_shape();
}