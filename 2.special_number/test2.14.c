//入门题库->2.特殊数字->14.求数字(倍数)
//14.求数字：输出2000（含2000）-3000（含3000）之间所有十位数是m（0<=m<=9）且是n的倍数的数。

#include <stdio.h>

void find_number(int m,int n)
{
    int i ;
    for (i = 2000; i <= 3000; i++)
        if (i / 10 % 10 == m && i % n == 0)
            printf("%d,", i);
}
int main()
{
    int m=7, n=8;
    find_number(m,n);
}
