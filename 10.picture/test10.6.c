//入门题库->10.图形输出->6.输出数字金字塔
#include <stdio.h>
void print_shape(int n)
{
    int i, j, a[100][100] = {0};
    for (i = 0; i < n; i++)
    {
        a[i][0] = 1;
    }
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%-4d", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    print_shape(10);
}