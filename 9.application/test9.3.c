//入门题库->9.实际应用->3.奖金提成
/*企业发放的奖金根据利润提成：
00万元 < 利润 <= 10 万元，高出00万元的部分，奖金可提成10%；
10万元 < 利润 <= 20 万元，高出10万元的部分，奖金可提成7.5%；
20万元 < 利润 <= 40 万元，高出20万元的部分，奖金可提成5%；
40万元 < 利润 <= 60 万元，高出40万元的部分，奖金可提成3%；
60万元 < 利润 <= 100万元，高出60万元的部分，奖金可提成1%；
100万元< 利润 ，高出100万的部分，奖金可提成1%；
从键盘输入当月利润n，求应发放奖金总数？
*/
#include <stdio.h>
void print_result(double n)
{
    double bonus, bonus10, bonus20, bonus40, bonus60, bonus100;
    bonus10 = 100000 * 0.1;
    bonus20 = bonus10 + 100000 * 0.075;
    bonus40 = bonus20 + 200000 * 0.05;
    bonus60 = bonus40 + 200000 * 0.03;
    bonus100 = bonus60 + 400000 * 0.015;
    if (n <= 100000)
        bonus = n * 0.1;
    else if (n <= 200000)
        bonus = bonus10 + (n - 100000) * 0.075;
    else if (n <= 400000)
        bonus = bonus20 + (n - 200000) * 0.05;
    else if (n <= 600000)
        bonus = bonus40 + (n - 400000) * 0.03;
    else if (n <= 1000000)
        bonus = bonus60 + (n - 600000) * 0.015;
    else if (n > 1000000)
        bonus = bonus100 + (n - 1000000) * 0.01;
    printf("bonus=%lf", bonus);
}
int main()
{
    double n = 200001; //当月利润
    print_result(n);
}
