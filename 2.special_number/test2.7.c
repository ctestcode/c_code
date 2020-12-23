//入门题库->2.特殊数字->7.中位数
/*7.中位数：计算有限个数的数据的中位数的方法是：把所有的同类数据按照大小的顺序排列。
如果数据的个数是奇数，则中间那个数据就是这群数据的中位数；如果数据的个数是偶数，
则中间那2个数据的算术平均值就是这群数据的中位数。现在给出n个正整数，求它们的中位数。
*/
#include <stdio.h>
/* 冒泡排序 */
void sort(int a[], int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}
void print_median(int a[],int count)
{
     if (count % 2 == 1)
    {
        printf("%d", a[count / 2]);
    }
    else
    {
        printf("%.2f", (a[count / 2] + a[count / 2 - 1]) / 2.0);
    }

}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int count = sizeof(a)/sizeof(int);
    sort(a, count);
    print_median(a,count);
   
}
