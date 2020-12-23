//入门题库->3.多维数组->2.左右对称反转
//2.左右对称反转
#include <stdio.h>
void print_leftright_reverse(int arr[4][5], int rows, int cols)
{
    int i, j, t;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols / 2; j++)
        {
            t = arr[i][cols - 1 - j];
            arr[i][cols - 1 - j] = arr[i][j];
            arr[i][j] = t;
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%-5d", arr[i][j]);
        printf("\n");
    }
}

int main()
{
    int arr[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
    };
    print_leftright_reverse(arr, 4, 5);
}
