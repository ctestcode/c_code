//入门题库->9.实际应用->6.学生成绩分布
/*读入N个学生的百分制成绩，统计五分制成绩的分布。百分制成绩到五分制成绩的转换规则：
大于等于90分为A；小于90且大于等于80为B；
小于80且大于等于70为C；小于70且大于等于60为D；
小于60为E。
输入在第一行中给出一个正整数N（≤1000），即学生人数；
第二行中给出N个学生的百分制成绩，其间以空格分隔。
在一行中输出A、B、C、D、E对应的五分制成绩的人数分布，数字间以空格分隔，行末不得有多余空格。
*/
#include <stdio.h>
int print_result(int *arr, int count)
{
    int a, b, c, d, e, i;
    a = b = c = d = e = 0;
    for (i = 0; i < count; i++)
    {
        if (arr[i] >= 90)
            a++;
        else if (arr[i] >= 80)
            b++;
        else if (arr[i] >= 70)
            c++;
        else if (arr[i] >= 60)
            d++;
        else
            e++;
    }
    printf("%d %d %d %d %d", a, b, c, d, e);
}
int main()
{
    int arr[] = {45, 34, 76, 98, 90, 34, 12, 12};
    int count = sizeof(arr) / sizeof(int);
    print_result(arr, count);
}
