//入门题库->1.递归调用->1.汉诺塔
// 1.汉诺塔：请输入盘子数，输出盘子移动的操作步骤。
#include <stdio.h>

void print_move(char from, char to)
{
    printf("%c to %c\n", from, to);
}

void hanoi(int n, char a, char b, char c)
{
    if (n == 1)
        print_move(a, c);
    else
    {
        hanoi(n - 1, a, c, b);
        print_move(a, c);
        hanoi(n - 1, b, a, c);
    }
}

int main()
{
    int count = 3; //盘子数
    hanoi(count, 'A', 'B', 'C');
}
