//递归调用->4.斐波那契数列
//4.斐波那契数列：请输入项数，输出具体数列。
#include <stdio.h>

#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n=5, i;

    for (i = 1; i <= n; i++)
        printf("%d,", fibonacci(i));
}
