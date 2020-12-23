//入门题库->8.进制转换->4.八进制转十进制
#include <stdio.h>
void print_dec(char s[10])
{
    int i, n;
    for (n = i = 0; s[i] != '\0'; i++)
    {
        n = n * 8 + s[i] - '0';
    }
    printf("%d", n);
}
int main()
{
    char s[10] = {"1234567"}; //输入一个二进制字符串
    print_dec(s);
}
