//入门题库->2.特殊数字->12.求数字(完全平方数)
//12.求数字：一个整数，它加上100后是一个完全平方数，它加上168又是一个完全平方数，请问该数是多少？

#include <stdio.h>
#include <math.h>

void print_number()
{
     int i = 1, x, y;
    while (1)
    {
        x = (int)sqrt(i + 100);
        y = (int)sqrt(i + 168);
        if ((x * x == i + 100) && (y * y == i + 168))
        {
            printf("%d", i);
            break;
        }
        i++;
    }
}

int main()
{
   print_number();
}
