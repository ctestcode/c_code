//入门题库->7.循环问题->4.求总和：11+22+33+44+55+66+77+88+99
#include <stdio.h>
void print_sum()
{
    int i, sum = 0;
    for (i = 1; i <= 9; i++)
        sum += (i * 10 + i);
    printf("%d", sum);
}
int main()
{
    print_sum();
}
