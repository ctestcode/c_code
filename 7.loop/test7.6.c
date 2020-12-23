//入门题库->7.循环问题->6.求总和：1-100以内所有奇数的和
#include <stdio.h>
void print_sum()
{
    int i, sum = 0;
    for (i = 1; i <= 100; i += 2)
        sum += i;
    printf("%d", sum);
}
int main()
{
    print_sum();
}
