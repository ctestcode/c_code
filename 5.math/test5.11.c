//入门题库->5.数学问题->11.分解质因数
/*11.分解质因数：每个合数（非质数）都可以写成几个质数相乘的形式，
这几个质数就叫做这个合数的质因数。比如，24可以被分解为2 2 2 3。
请输入一个合数，输出它的质因数。
*/

#include <stdio.h>
void print_prime_factor(int n)
{
    int i;
    while (n != 1)
    {
        for (i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d ", i);
                n = n / i;
                break;
            }
        }
    }
}
int main()
{
    int n = 838834; //合数（非质数）
    print_prime_factor(n);
}
