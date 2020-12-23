//入门题库->9.实际应用->4.出租车计价
/*根据某城市普通出租车收费标准编写程序计算车费，标准如下：
起步里程为3公里，起步费10元；超起步里程后10公里内，每公里2元；
超过10公里以上的部分加收50%的回空补贴费，即每公里3元；营运过程中，
因路阻及乘客要求临时停车的，按每5分钟2元计收（不足5分钟则不收费）。
输入在一行中，给出输入行驶里程（单位为公里，精确到小数点后1位）
与等待时间（单位为分钟），其间以空格分隔。输出乘客应支付的车费（单位为元）
，结果四舍五入，保留到元。
*/
#include <stdio.h>
void print_result(double mile, int time)
{
    double price, price1, price2;
    scanf("%lf%d", &mile, &time);
    if (mile <= 3)
    {
        price1 = 10;
    }
    else if (mile <= 10)
    {
        price1 = 10 + (mile - 3) * 2.0;
    }
    else
    {
        price1 = 10 + (10 - 3) * 2.0 + (mile - 10) * 3.0;
    }
    price2 = time / 5 * 2;
    price = price1 + price2;
    printf("%.0f", price);
}
int main()
{
    double mile = 15.4; //公里数
    int time;           //车程时间
    print_result(mile, time);
}
