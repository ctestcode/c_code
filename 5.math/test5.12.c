//入门题库->5.数学问题->12.一元二次方程
//12.一元二次方程：求一元二次方程〖ax〗^2+bx+c=0的解（a、b、c为任意实数）。
#include <stdio.h>
#include <math.h>
void caculate_eq(double a, double b, double c)
{
    double disc, x1, x2, realpart, imagpart;

    printf("The equation ");
    if (fabs(a) <= 1e-6)
        printf("is not a quadratic");
    else
    {
        disc = b * b - 4 * a * c;
        if (fabs(disc) <= 1e-6)
            printf("has two equal roots:%8.4f", -b / (2 * a));
        else if (disc > 1e-6)
        {
            x1 = (-b + sqrt(disc)) / (2 * a);
            x2 = (-b - sqrt(disc)) / (2 * a);
            printf("has two differ roots:%8.4f and %8.4f", x1, x2);
        }
        else
        {
            realpart = -b / (2 * a);
            imagpart = sqrt(-disc) / (2 * a);
            printf("has complex roots:\n");
            printf("%8.4f+%8.4fi\n", realpart, imagpart);
            printf("%8.4f-%8.4fi\n", realpart, imagpart);
        }
    }
}
int main()
{
    //〖ax〗^2+bx+c=0
    caculate_eq(3,4,1);
}
