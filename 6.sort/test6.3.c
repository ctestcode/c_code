//入门题库->6.排序算法->3.插入排序法
#include <stdio.h>
void insertion_sort(int arr[], int len)
{
    int i, j, t;
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j > 0; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                t = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = t;
            }
            else
            {
                break;
            }
        }
    }
}
int main()
{
    int arr[] = {11, 99, 22, 88, 33, 77, 44, 66, 55, 55}, i;
    insertion_sort(arr, 10);
    for (i = 0; i < 10; i++)
    {
        printf("%-4d", arr[i]);
    }
}
