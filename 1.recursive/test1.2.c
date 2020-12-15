//递归调用->2.爬楼梯
//2.爬楼梯：树老师爬楼梯，他可以每次走1级或者2级，输入楼梯的级数，求不同的走法数。
#include <stdio.h>

int stair(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return stair(n - 1) + stair(n - 2);
}

int main() {
    int n=20;// 楼梯的级数
    printf("%d", stair(n));
}
