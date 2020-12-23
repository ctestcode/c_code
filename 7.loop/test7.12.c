//入门题库->7.循环问题->12.求Π的值(Pi/4)
//根据以下公式求Π的近似值，要求累加到某项的绝对值小于1e-6时为止。
#include <stdio.h>
#include <math.h>
void print_sum()
{
    double fz = 1, fm = 1, s = 0, t = 1;
    while (fabs(fz / fm * t) >= 1e-6)
    {
        /*累加当前项*/
        s += (fz / fm * t);
        /*准备下一项*/
        fm += 2;
        /*改变符号值*/
        t = -t;
    }
    printf("%.2lf", s * 4);
}
int main()
{
    print_sum();
}
