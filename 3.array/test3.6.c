//入门题库->3.多维数组->6.N阶方阵转置
//6.N阶方阵a进行转置，输出行列互换后的方阵a。

#include <stdio.h>
#define N 4

void transpose_Array(int a[N][N])
{
    int i, j, t;
    for (i = 0; i < N; i++)
        for (j = 0; j < i; j++)
        {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
}
int main()
{
    int i, j;
    int a[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };
    transpose_Array(a);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%-5d", a[i][j]);
        printf("\n");
    }
}
