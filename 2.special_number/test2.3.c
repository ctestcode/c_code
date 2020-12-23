//入门题库->2.特殊数字->3.素数
//3.素数：输出1-1000之间所有的素数。

#include <stdio.h>
void print_prime(int count)
{
    int i, j;
    for (i = 1; i <= count; i++)
    {
        for (j = 2; j < i; j++)
            if (i % j == 0)
                break;
        if (i == j)
            printf("%d,", i);
    }
}

int main()
{

    print_prime(100);
}
