//入门题库->9.实际应用->5.阶梯电价
/*为了提倡居民节约用电，某省电力公司执行“阶梯电价”，安装一户一表的
居民用户电价分为两个“阶梯”：月用电量50千瓦时（含50千瓦时）以内的，
电价为0.53元/千瓦时；超过50千瓦时的，超出部分的用电量，电价上调0.05元/千瓦时。
输入某用户的月用电量（单位：千瓦时），计算该用户应支付的电费（元），结果保留两位小数。
*/
#include <stdio.h>
void print_result(float ydl)
{
    float df;
    if (ydl <= 50)
        df = 0.53 * ydl;
    else
        df = 0.53 * 50 + (ydl - 50) * 0.58;
    printf("%.2f", df);
}
int main()
{
    float ydl=15.3;   //用电量 千瓦
    print_result(ydl);
}
