//入门题库->8.进制转换->1.十进制（0~2147483647）转任意进制（2进制~16进制）
#include <stdio.h>
void print_convert(int num, int radix)
{
    int i = 0;
    char res[32] = {0}, table[] = "0123456789ABCDEF";
    if (num == 0)
    {
        res[0] = '0';
        i = 1;
    }
    while (num > 0)
    {
        res[i++] = table[num % radix];
        num /= radix;
    }
    printf("转换结果：");
    while (--i >= 0)
    {
        printf("%c", res[i]);
    }
}
int main()
{
    int num = 100; //请输入一个十进制整数
    int radix = 16;   //请输入要转换为几进制
    print_convert(num, radix);
}
