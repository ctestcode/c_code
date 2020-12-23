//入门题库->2.特殊数字->16.求数字(余数)
//16.求数字：求1（含1）-200（含200）中，能同时被2、5除余1的整数。

#include <stdio.h>

void find_number()
{
    int i;
    for (i = 1; i <= 200; i++)
        if (i % 2 == 1 && i % 5 == 1)
            printf("%d,", i);
}
int main()
{
    find_number();
}
