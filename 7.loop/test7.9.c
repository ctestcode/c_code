//入门题库->7.循环问题->9.斐波那契数列求和：1+1+2+3+5+8+…+6765
#include <stdio.h>
void print_sum()
{
    int i, a = 1, b = 1, sum = 0;
    for (i = 1;; i++)
    {
        sum += (a + b);
        if (b == 6765)
            break;
        a = a + b;
        b = a + b;
    }
    printf("%d", sum);
}
int main()
{
    print_sum();
}
