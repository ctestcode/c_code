//特殊数字->1.奇数
//1.奇数：输出1-1000之间所有的奇数。
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 1000; i++)
        if (i % 2 == 1)
            printf("%d,", i);
}
