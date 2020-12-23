//入门题库->2.特殊数字->23.相反数
//23.相反数：输入一个正整数，输出它的相反数。
#include <stdio.h>

void print_reverse(int number)
{
    int sum = 0;

    while (number > 0)
    {
        sum = sum * 10 + number % 10;
        number = number / 10;
    }
    printf("%d", sum);
}

int main()
{
    int number = 11223344; //输入一个正整数
    print_reverse(number);
}
