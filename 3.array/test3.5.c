//入门题库->3.多维数组->5.两个对角线上元素之和
//5.分别求出N阶方阵a中两个对角线上元素之和。
#include <stdio.h>
#define N 4

void print_sum_Array(int a[N][N])
{
    int i, j, k = N, pr1 = 0, pr2 = 0;
    for (i = 0; i < N; i++)
    {
        pr1 += a[i][i];
        k = k - 1;
        pr2 += a[i][k];
    }
    printf("pr1=%d\n", pr1);
    printf("pr2=%d\n", pr2);
}
int main()
{
    int a[N][N] = {
        {1, 2, 3, 4},
        {2, 2, 3, 3},
        {3, 3, 2, 2},
        {4, 3, 2, 1},
    };
    print_sum_Array(a);
}
