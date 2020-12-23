//入门题库->7.循环问题->16.求cosx的值
//根据以下公式求cosx的近似值，要求累加到某项的绝对值小于1e-6时为止。
#include <stdio.h>
#include <math.h>
void print_cosx(double x)
{
    double t, s = 0;
    int i = 0;
    scanf("%lf", &x);
    t = 1;
    while (fabs(t) >= 1e-6)
    {
        s += t;
        i++;
        t *= -1 * (x * x) / (2 * i) / (2 * i - 1);
    }
    printf("%.2lf", s);
}
int main()
{
	double x=1.25;
    print_cosx(x);
}
