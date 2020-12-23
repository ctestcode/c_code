//入门题库->7.循环问题->13.求e的值
//根据以下公式求e的近似值，要求累加到某项的绝对值小于1e-6时为止。
#include <stdio.h>
#include <math.h>
void print_e()
{
    double fz = 1, fm = 1, s = 1, i = 1;
    while (fabs(fz / fm) >= 1e-6)
    {
        /*累加当前项*/
        s += (fz / fm);
        /*准备下一项*/
        fm *= (++i);
    }
    printf("%.2lf", s);
}
int main()
{
    print_e();
}
