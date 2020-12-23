//入门题库->7.循环问题->3.求总和：1-2+3-4+5-…-100。
#include <stdio.h>
void print_sum()
{
    int i, sum = 0;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
            sum -= i;
        else
            sum += i;
    }
    printf("%d", sum);
}
int main()
{
    print_sum();
}
