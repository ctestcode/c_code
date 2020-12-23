//入门题库->1.递归调用->6.取球问题
//6.取球问题：在n个球中，任意取m个（不放回），求有多少种不同取法。
#include <stdio.h>

int ball(int n, int m)
{
    if (n < m)
        return 0;
    if (n == m)
        return 1;
    if (m == 0)
        return 1;
    return ball(n - 1, m - 1) + ball(n - 1, m);
}

int main()
{
    int n=8; //n个球中
    int m=2; //任意取m个（不放回）
    printf("%d", ball(n, m));
}
