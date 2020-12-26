//入门题库->7.循环问题->15.求sinx的值
//根据以下公式求sinx的近似值，要求累加到某项的绝对值小于1e-6时为止。
#include <stdio.h>
#include <math.h>
void print_sinx(double x)
{
    double t, s = 0;
    int i = 0;
 
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
    double x=0.5;
    print_sinx(x);
}
