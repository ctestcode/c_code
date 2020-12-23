//入门题库->9.实际应用->8.报数问题：
//有n个人围成一圈，顺序排号，从第一个开始报数(从1到3报数),凡报到3的人退出圈子,问最后留下的是原来第几号的那位。
#include <stdio.h>
void print_result(int *a, int n)
{
    int t, c, i;
    t = n;
    for (i = c = 0; n > 1; i++)
    {
        /* 从头开始吗 */
        if (i == t)
        {
            i = 0;
        }
        /* 退圈的不管 */
        if (a[i] != 0)
        {
            c++;
        }
        /* 数到三退圈 */
        if (c == 3)
        {
            a[i] = 0;
            c = 0;
            n--;
        }
    }
    for (i = 0; i < t; i++)
    {
        if (a[i] != 0)
        {
            printf("%d", a[i]);
        }
    }
}
void main()
{
#define N 1000
    int a[N];
    int i;
    for (i = 0; i < N; i++)
        a[i] = i + 1;
    print_result(a, N);
}
