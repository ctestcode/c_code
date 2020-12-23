//入门题库->5.数学问题->10.哥德巴赫猜想
/*10.哥德巴赫猜想：任何一个大于2的偶数总能表示为两个素数之和。
比如：24=5+19，其中5和19都是素数，请编写程序验证。
*/
#include <stdio.h>
int isPrime(long p)
{
    long i;
    for (i = 2; i < p; i++)
        if (p % i == 0)
            return 0;
    return 1;
}
void print_Goldbach(int n)
{
    long p1, p2;

    for (p1 = 3; p1 <= n / 2; p1 += 2)
    {
        p2 = n - p1;
        if (isPrime(p1) && isPrime(p2))
        {
            printf("%ld=%ld+%ld\n", n, p1, p2);
            break;
        }
    }
}
int main()
{
    long n = 3838; //任何一个大于2的偶数
    print_Goldbach(n);
}
