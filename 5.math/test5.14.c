//入门题库->5.数学问题->14.圆的周长和面积
//14.圆的周长和面积：输入圆的半径，输出圆的周长和面积。Π=3.14

#include <stdio.h>
void print_circle_data(float r)
{
    float l, area;

    l = 2 * 3.14 * r;
    area = 3.14 * r * r;
    printf("周长 = %.2f, 面积 = %.2f\n", l, area);
}

int main()
{
    float radius = 78;
    print_circle_data(78);
}
