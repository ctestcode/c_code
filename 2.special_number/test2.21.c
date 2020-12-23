//入门题库->2.特殊数字->21.求位数
//21.求位数：输入一个正整数，输出它是几位数？

#include <stdio.h>

void print_count(int number)
{
    int count = 1;

    while (number = number / 10)
    {
        count++;
    }
    printf("%d", count);
}

int main()
{
    int number = 11223344; //输入一个正整数
    print_count(number);
}
