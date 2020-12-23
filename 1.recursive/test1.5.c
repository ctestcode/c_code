//入门题库->1.递归调用->5.求阶乘
//5.求阶乘：请输入整数n，求1!+2!+3!+4!+5!+6!+7!+…+n!的和。
#include <stdio.h>

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n=7, i, sum = 0;

    for (i = 1; i <= n; i++)
        sum += factorial(i);
    printf("sum=%d", sum);
}
