//入门题库->2.特殊数字->17.求数字(倍数回文)
//17.求数字：输出100（含100） - 999（含999）之间所有是7的倍数的回文数。

#include <stdio.h>
void print_number()
{
    int i, a, c;
    for (i = 100; i <= 999; i++)
    {
        a = i / 100;
        c = i % 10;
        if (a == c && i % 7 == 0)
            printf("%d,", i);
    }
}

int main()
{
    print_number();
}
