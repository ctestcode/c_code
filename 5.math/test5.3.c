//入门题库->5.数学问题->3.斐波那契数列(循环)
//3.斐波那契数列：请用循环输出斐波那契数列的前20项。
#include <stdio.h>
void print_fibonacci()
{
    int i, a = 1, b = 1;
    for (i = 1; i <= 10; i++)
    {
        printf("%d,%d,", a, b);
        a = a + b;
        b = a + b;
    }
}
int main()
{
    print_fibonacci();
}
