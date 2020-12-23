//入门题库->9.实际应用->14.递归转换
//用递归的方法将一个整数转换为字符串。例如：输入123456，输出“123456”
#include <stdio.h>
void tranvers(int n)
{
    if (n / 10 != 0)
        tranvers(n / 10);
    printf("%c", n % 10 + '0');
}
int main()
{
    int n = 12345678;
    printf("The string is ");
    if (n < 0)
    {
        printf("-");
        n = -n;
    }
    tranvers(n);
}
