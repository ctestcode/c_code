//入门题库->9.实际应用->2.计算天数：输入年月日，求当天是那年的第几天？
#include <stdio.h>
void print_resuilt(int y, int m, int d)
{
    int s, i;
    s = d;
    for (i = 1; i < m; i++)
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            s += 31;
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            s += 30;
        else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
            s += 29;
        else
            s += 28;
    printf("%d", s);
}
int main()
{
    int y = 2020;
    int m = 12;
    int d = 14;
    print_resuilt(y, m, d);
}
