//入门题库->7.循环问题->8.递归求和：1!+2!+3!+4!+5!+6!+7!+8!+9!+10!
#include <stdio.h>
void print_sum()
{
    int i, n = 1, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        n *= i;
        sum += n;
    }
    printf("%d", sum);
}
int main()
{
    print_sum();
}