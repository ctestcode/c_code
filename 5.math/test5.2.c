//入门题库->5.数学问题->2.百钱百鸡
//2.百钱百鸡：100元钱买100只鸡，公鸡5块钱一只，母鸡3块钱一只，小鸡一块钱3只，请输出所有组合。
#include <stdio.h>
void print_result()
{
    int a, b, c;
    for (a = 0; a <= 20; a++)
    {
        for (b = 0; b <= 33; b++)
        {
            c = 100 - a - b;
            if (a * 5 + b * 3 + c / 3 == 100 && c % 3 == 0)
                printf("%d,%d,%d\n", a, b, c);
        }
    }
}
int main()
{
    print_result();
}
