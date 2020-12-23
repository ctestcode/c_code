//入门题库->2.特殊数字->8.完全平方数
//8.完全平方数：若一个数能表示成某个数的平方的形式，则称这个数为完全平方数。
#include <stdio.h>
#include <math.h>

int ISquare(int n)
{
    int m = (int)sqrt(n);
    if (m * m == n)
        return m;
    return 0;
}

int main()
{
    int n = 144;//被测试的数
    int p;
    p = ISquare(n);
    if (p)
        printf("%d是完全平方数,%d=%d*%d\n", n, n, p, p);
    else
        printf("%d非完全平方数\n", n);
}
