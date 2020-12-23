//入门题库->3.多维数组->7.方阵相加
//7.N阶方阵a加上方阵a的转置存放在方阵b中，输出方阵b。

#include <stdio.h>
#define N 4

void plus_transpose_Array(int a[N][N], int b[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            b[i][j] = a[i][j] + a[j][i];
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
	int b[N][N];
    plus_transpose_Array(a, b);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%-5d", b[i][j]);
        printf("\n");
    }
}
