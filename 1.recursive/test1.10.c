//入门题库->1.递归调用->10.最大公约数
//10.最大公约数：利用递归算法求两个数的最大公约数。

#include <stdio.h>
int gcd(int a, int b)
{
    int t;
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int a=12;// 第一个数
    int b=36; // 第二个数
 
    printf("gcd=%d", gcd(a, b));
}
