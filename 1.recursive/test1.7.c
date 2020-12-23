//入门题库->1.递归调用->7.杨辉三角
//7.杨辉三角：输入要打印的层数，打印杨辉三角。
#include <stdio.h>

int triangle(int m, int n)
{
    if (m == 0 || n == 0 || m == n)
        return 1;
    return triangle(m - 1, n) + triangle(m - 1, n - 1);
}

int main()
{
    int n=7;    //输入要打印的层数
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", triangle(i, j));
        }
        printf("\n");
    }
}
