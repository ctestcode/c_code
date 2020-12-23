//入门题库->1.递归调用->3.爬楼梯
//3.爬楼梯：树老师爬楼梯，他可以每次走1级、2级或者3级，输入楼梯的级数，求不同的走法数。
#include <stdio.h>

int stair(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 4;
    return stair(n - 1) + stair(n - 2) + stair(n - 3);
}

int main()
{
    int n = 10; //楼梯级数
    printf("%d", stair(n));
}
