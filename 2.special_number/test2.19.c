//入门题库->2.特殊数字->19.求数字(条件计算)
/*19.求数字：输出100（含100）-200（含200）以内的满足以下条件的数，
条件为：这个数与3的和是5的倍数，与3的差是6的倍数，输出这样的数。
*/

#include <stdio.h>
void print_number()
{

    int i;
    for (i = 100; i <= 200; i++)
        if ((i + 3) % 5 == 0 && (i - 3) % 6 == 0)
            printf("%d,", i);
}
int main()
{
    print_number();
}
