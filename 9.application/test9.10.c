//入门题库->9.实际应用->10.一维数组(统计)
/*输入n个（1<n<=10）正整数并保存到数组中，求出最大值、
最小值、平均值以及最大值、最小值在数组中的下标分别是多少。
*/
#include <stdio.h>
void print_result(int *a, int n)
{
    int i, max = 0, min = 0, sum = 0;
    float avg;
    for (i = 0; i < n; i++)
    {

        sum += a[i];
    }
    avg = (float)sum / n;
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[max])
            max = i;
        if (a[i] < a[min])
            min = i;
    }
    printf("max=%d,index=%d\n", a[max], max);
    printf("min=%d,index=%d\n", a[min], min);
    printf("avg=%.2f\n", avg);
}
int main()
{
    int a[] = {13, 4, 56, 776, 55, 2343, 2323, 232, 545, 7676};
    int n = sizeof(a) / sizeof(a[0]);
    print_result(a, n);
}
