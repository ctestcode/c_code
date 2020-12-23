//入门题库->2.特殊数字->11.求数字(最大公约数及最小公倍数)
//11.求数字：求两个整数的最大公约数及最小公倍数。
#include <stdio.h>
/* 最大公约数 */
int gcd(int a, int b)
{
    int t;
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}
/* 最小公倍数 */
int lcm(int a, int b, int c)
{
    return a * b / c;
}
int main()
{
    int a = 9;
    int b = 36;
    int x, y;
    x = gcd(a, b);
    y = lcm(a, b, x);
    printf("最大公约=%d,最小公倍数=%d", x, y);
}
