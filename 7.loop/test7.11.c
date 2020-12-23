//入门题库->7.循环问题->11.求Π的值(Pi/2)
//根据以下公式求Π的近似值，要求累加到某项的绝对值小于1e-6时为止。
#include <stdio.h>
#include <math.h>
void print_sum()
{
    double fz = 1, fm = 3, s = 1, i = 1;
    while (fabs(fz / fm) >= 1e-6)
    {
        /*累加当前项*/
        s += (fz / fm);
        /*准备下一项*/
        fz *= (++i);
        fm *= 2 * i + 1;
    }
    printf("%.2lf", s * 2);
}
int main()
{
    print_sum();
}
