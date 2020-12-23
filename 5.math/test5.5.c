//入门题库->5.数学问题->5.兔子数列2
/*5.兔子数列（又称斐波那契数列）：有一对兔子，从出生后第三个月起每个月都生一对兔子，
小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，请问第一个月出生的一对兔子，
至少需要繁衍到第几个月时兔子总数才可以达到N对？
*/
#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int m = 1, n, s = 0;
    n = 100; // 达到100对。
    while ((s = fibonacci(m)) < n)
    {
        m++;
    }
    printf("到第%d个月，才有%d对兔子,已有%d对兔子\n", m, n, s);
}
