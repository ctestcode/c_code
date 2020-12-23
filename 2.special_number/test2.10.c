//入门题库->2.特殊数字->10.求年份
//10.求年份：输出2000（含2000）-2020（含2020）之间所有的闰年年份。

#include <stdio.h>

void print_leap_year(int begin, int end)
{
    int y;
    for (y = begin; y <= end; y++)
    {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            printf("%d,", y);
    }
}
int main()
{
    print_leap_year(2000, 2020);
}
