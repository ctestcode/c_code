//入门题库->9.实际应用->15.四舍五入
//编程实现将浮点数“123.456789”分别四舍五入保留1位小数、2位小数和3位小数。
#include <stdio.h>
void print_result(float a)
{
    float f1 = (int)((a * 10) + 0.5) / 10.0;     //保留1位小数
    float f2 = (int)((a * 100) + 0.5) / 100.0;   //保留2位小数
    float f3 = (int)((a * 1000) + 0.5) / 1000.0; //保留3位小数
    printf("f1 = %0.1f\n", f1);
    printf("f2 = %0.2f\n", f2);
    printf("f3 = %0.3f\n", f3);
}
int main()
{
    float a = 123.456789;
    print_result(a);
}
