//入门题库->2.特殊数字->18.求数字(位数遍历)
//18.求数字：输出100（含100）-200（含200）以内的十位数字为5，百位和个位的和是6的倍数的所有的数。

#include <stdio.h>
void print_number()
{
    int i, a, b, c;
    for (i = 100; i <= 200; i++)
    {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if (b == 5 && (a + c) % 6 == 0)
            printf("%d,", i);
    }
}

int main()
{
    print_number();
}
