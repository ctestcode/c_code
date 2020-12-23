//入门题库->7.循环问题->5.求总和：s=a+aa+aaa+…+aaa(n个a)
//输入a表示基数，输入n表示项数。
#include <stdio.h>
void print_sum(int a, int n)
{
    int i, t = 0, sum = 0;
    for (i = 1; i <= n; i++)
    {
        t = t * 10 + a;
        sum += t;
    }
    printf("%d", sum);
}
int main()
{
    int a = 2, n = 5;
    print_sum(a, n);
}
