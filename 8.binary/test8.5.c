//入门题库->8.进制转换->5.十六进制转十进制
#include <stdio.h>
void print_dec(char s[10])
{
    int i, n;
    for (n = i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            n = n * 16 + s[i] - '0';
        if (s[i] >= 'a' && s[i] <= 'z')
            n = n * 16 + s[i] - 'a' + 10;
        if (s[i] >= 'A' && s[i] <= 'Z')
            n = n * 16 + s[i] - 'A' + 10;
    }
    printf("%d", n);
}
int main()
{
    char s[10] = {"ABC"}; //输入一个二进制字符串
    print_dec(s);
}