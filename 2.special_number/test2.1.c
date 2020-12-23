//入门题库->2.特殊数字->1.奇数
//1.奇数：输出1-100之间所有的奇数。
#include <stdio.h>

void print_odd(int count)
{
    int i;
    for (i = 1; i <= count; i++)
        if (i % 2 == 1)
            printf("%d,", i);
}

int main()
{
    int count = 100;
    print_odd(count);
}
