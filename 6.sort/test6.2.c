//入门题库->6.排序算法->2.选择排序法

#include <stdio.h>
//高效率
void selction_sort_fast(int arr[], int len)
{   
    int i, j, t, min;
    for (i = 0; i < len - 1; i++)
    {
        min = i;
        for (j = i + 1; j < len; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        if (min != i)
        {
            t = arr[min];
            arr[min] = arr[i];
            arr[i] = t;
        }
    }
}
//低效率
void selction_sort_slow(int arr[], int len)
{   
    int i, j, t;
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}
int main()
{
    int arr[] = {11, 99, 22, 88, 33, 77, 44, 66, 55, 55}, i;
    selction_sort_fast(arr, 10);
    for (i = 0; i < 10; i++)
    {
        printf("%-4d", arr[i]);
    }
}
