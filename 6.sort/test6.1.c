//入门题库->6.排序算法->1.冒泡排序法。

#include <stdio.h>
void bubble_sort(int arr[], int len)
{
    int i, j, t;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
int main()
{
    int arr[] = {11, 99, 22, 88, 33, 77, 44, 66, 55, 55}, i;
    bubble_sort(arr, 10);
    for (i = 0; i < 10; i++)
    {
        printf("%-4d", arr[i]);
    }
}
