//入门题库->2.特殊数字->20.求数字(相邻奇数)
//20.求数字：找出乘积为399的两个相邻奇数。
#include <stdio.h>

void print_number()
{
    int i = 1;
    while (i * (i + 2) != 399)
        i = i + 2;
    printf("%d,%d", i, i + 2);
}

int main()
{
    print_number();
}
