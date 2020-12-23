//入门题库->5.数学问题->4.兔子数列1
/*4.兔子数列1（又称斐波那契数列）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问前10个月，每个月有兔子多少对？
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
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("the %d month has %d\n", i, fibonacci(i));
    }
}
