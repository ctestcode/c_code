//入门题库->9.实际应用->11.一维数组(加密)
/*字符加密：编写加密函数：int encode(int *c)、
解密函数：int decode(int *c)，主函数输入一些纯字符，
调用加密算法对这些字符进行加密，加密方式：每个字符的码值+13，
然后再调用解密函数将加密后的字符依次输出。
*/
#include <stdio.h>
/* 加密算法 */
int encode(int *c)
{
    *c = *c + 13;
    return *c;
}

/* 解密算法 */
int decode(int *c)
{
    *c = *c - 13;
    return *c;
}
int main()
{
    int c[100] = {'a','b','c','d','c','e','f',0}, i;
    i = 0;
    while (c[i] != 0)
    {
        encode(&c[i]);
        putchar(c[i]);
        i++;
    }
    printf("\n");
    i = 0;
    while (c[i] != 0)
    {
        decode(&c[i]);
        putchar(c[i]);
        i++;
    }
    printf("\n");
}
