//入门题库->9.实际应用->9.数据加密
/*某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，
加密规则如下：每位数字都加上5，然后用和除以10的余数代替该数字，再将第一位和第四位交换，
第二位和第三位交换。然后按照相反的顺序依次输出。
*/
#include <stdio.h>
#define N 4
void encode(int a)
{
    int i, t, data[N];
    data[0] = a % 10;
    data[1] = a / 10 % 10;
    data[2] = a / 100 % 10;
    data[3] = a / 1000;
    for (i = 0; i < N; i++)
    {
        data[i] += 5;
        data[i] %= 10;
    }
    for (i = 0; i < N / 2; i++)
    {
        t = data[i];
        data[i] = data[N - 1 - i];
        data[N - 1 - i] = t;
    }
    for (i = 0; i < N; i++)
    {
        printf("%d", data[N - 1 - i]);
    }
}
int main()
{
    int value = 12345678;
    encode(value);
}
