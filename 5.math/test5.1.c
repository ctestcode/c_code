//入门题库->5.数学问题->1.鸡兔同笼
//1.鸡兔同笼：假设鸡兔共30只，脚88只，问鸡兔各有多少只？
#include <stdio.h>
void print_result()
{
    int i, j;
    for (i = 0; i <= 30; i++)
    {
        j = 30 - i;
        if (2 * i + 4 * j == 88)
            printf("%d,%d", i, j);
    }
}
int main()
{
    print_result();
}
