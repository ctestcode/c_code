//入门题库->2.特殊数字->22.求数和
//22.求数和：输入一个正整数，求其各位之和。
#include <stdio.h>

int get_sum(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number = number / 10;
    }
	return sum;
}

int main()
{
    int number = 11223344; //输入一个正整数
    printf("%d", get_sum(number));
}
