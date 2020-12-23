//入门题库->7.循环问题->求sinx的值
//根据以下公式求sinx的近似值，要求累加到某项的绝对值小于1e-6时为止。
#include <stdio.h>
void print_sinx()
{
    double x, t, s = 0;
    int i = 0;
    scanf("%lf", &x);
    t = x;
    while (fabs(t) >= 1e-6)
    {
        s += t;
        i++;
        t *= -1 * (x * x) / (2 * i) / (2 * i + 1);
    }
    printf("%.2lf", s);
}
int main()
{
    print_sinx();
}
