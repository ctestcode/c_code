//入门题库->2.特殊数字->4.完数
//4.完数：输出1-1000之间所有的完数。

#include <stdio.h>
void print_perfect(int count)
{
    int i, j, s;
    for (i = 1; i <= count; i++)
    {
        s = 0;
        for (j = 1; j < i; j++)
            if (i % j == 0)
                s += j;
        if (i == s)
            printf("%d,", i);
    }
}

int main()
{
    print_perfect(100);
}
