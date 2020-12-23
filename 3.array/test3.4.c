//入门题库->3.多维数组->4.数组对角线对称
//4.判断a[N][N]是否关于主对角线对称（左斜），若对称输出1，否则输出0。
#include <stdio.h>
#define N 4

int check_Array(int a[N][N])
{
    int i, j, flag = 1;
    for (i = 0; i < N; i++)
        for (j = 0; j < i; j++)
            if (a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
    if (flag == 1)
        return 1;
    return 0;
}
int main()
{
    int a[N][N] = {
    {1,2,3,4},
    {2,2,3,3},
	{3,3,2,2},
	{4,3,2,1},
    };
  printf("数组对角线%s", check_Array(a)?"对称":"不对称");
}
