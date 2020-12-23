//入门题库->2.特殊数字->2.偶数
//2.偶数：输出1-1000之间所有的偶数。
#include <stdio.h>

void print_even(int count)
{
    int i;
    for (i = 1; i <= count; i++)
        if (i % 2 == 0)
            printf("%d,", i);
}

int main()
{
  print_even(100);
}
