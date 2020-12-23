//入门题库->10.图形输出->2.左下三角
#include <stdio.h>
void print_shape()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        if (i != 10)
            printf("\n");
    }
}
int main()
{
    print_shape();
}