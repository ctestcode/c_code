//入门题库->5.数学问题->13.三角形的周长和面积
/*三角形的周长和面积：给定平面上任意三个点的坐标（x1,y1）、（x2,y2）、（x3,y3），
编写程序检验它们能否构成三角形。若这三个点不能构成三角形，则输出“Impossible”；
若可以，则输出该三角形的周长和面积。
*/
#include <stdio.h>
#include <math.h>
void print_triangle_data(float x1, float x2, float x3, float y1, float y2, float y3)
{
    float a, b, c, s, l, area;
    a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    if (a + b > c && a + c > b && b + c > a)
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        l = a + b + c;
        printf("周长 = %.2f, 面积 = %.2f\n", l, area);
    }
    else
    {
        printf("Impossible\n");
    }
}
int main()
{
    float x1 = 1, y1 = 4, x2 = 2, y2 = 5  ,x3 = 1, y3 = 6;
    print_triangle_data(x1, x2, x3, y1, y2, y3);
}
