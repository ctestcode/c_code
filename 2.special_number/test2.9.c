//入门题库->2.特殊数字->9.随机数
//9.随机数：生成100个1（含1）-100（含100）之间的随机数。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRand(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

int main()
{
    int i;
    srand(time(NULL));
    for (i = 1; i <= 100; i++)
    {
        printf("%d ", getRand(1, 100));
        if (i % 10 == 0)
        {
            printf("\n");
        }
    }
}
