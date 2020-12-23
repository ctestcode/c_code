//入门题库->7.循环问题->10.分数求和：1-1/3+1/5-1/7+…-1/99+1/101
#include <stdio.h>
void print_sum()
{
    int i, t = 1;
    float n, sum = 0;
    for (i = 1; i <= 101; i += 2)
    {
        n = (1.0 / i) * t;
        sum += n;
        t = -t;
    }
    printf("%.2f", sum);
}
int main()
{
    print_sum();
}
