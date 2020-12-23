//入门题库->7.循环问题->14.求ex的值
//根据以下公式求ex的近似值，要求累加到某项的绝对值小于1e-6时为止
#include <stdio.h>
#include <math.h>
void print_sum(double x)
{
    double fz, fm, s = 1, i = 1;
  
    fz = x;
    fm = 1;
    while (fabs(fz / fm) >= 1e-6)
    {
        /*累加当前项*/
        s += (fz / fm);
        /*准备下一项*/
        fz = pow(x, ++i);
        fm *= i;
    }
    printf("%.2lf", s);
}
int main()
{
	double x=1.25;
    print_sum(x);
}
