//入门题库->7.循环问题->17.求平方根
/*编写函数double getsqrt(double a)，计算x=√a（只计算a=1，2，3，4，5的值）。
已知计算x=√a的迭代公式如下所示，要求累加到某项的绝对值小于1e-6时为止。*/
#include <stdio.h>
#include <math.h>
double getsqrt(double a)
{
    double x0, x1;
    x0 = a / 2;
    x1 = (x0 + a / x0) / 2;
    while (fabs(x0 - x1) >= 1e-6)
    {
        x0 = x1;
        x1 = (x0 + a / x0) / 2;
    }
    return x0;
}

int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%.2lf\n", getsqrt(i));
    }
}