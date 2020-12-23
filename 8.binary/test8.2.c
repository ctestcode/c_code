//入门题库->8.进制转换->2.任意进制（2进制~16进制）转十进制（0~2147483647）
#include <stdio.h>
#include <string.h>
void print_dec(char num[32], int radix)
{
    int res = 0, i, k = 1;
    char table[] = "0123456789ABCDEF";
    for (i = strlen(num) - 1; i >= 0; i--)
    {
        res += (strchr(table, num[i]) - table) * k;
        k *= radix;
    }
    printf("转换结果：%d", res);
}
int main()
{
    char num[32] = {"A45"};
    int radix = 16;
    print_dec(num, radix);
}
