//入门题库->9.实际应用->1.自由落体
/*一球从100米高度自由落下，每次落地后反跳回原高度的一半；
再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
*/
#include <stdio.h>
void print_result()
{
    double s = 100, h = s / 2;
    int i;
    for (i = 2; i <= 10; i++)
    {
        s = s + 2 * h;
        h = h / 2;
    }
    printf("s=%.6lf\n", s);
    printf("h=%.6lf\n", h);
}
int main()
{
    print_result();
}