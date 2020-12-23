//入门题库->4.字符处理->7.字符串统计
//编写字符串统计函数 strstrc,实现统计str字符串中指定字符串出现的个数
#include <stdio.h>
int strstrc(char *str, char *substr)
{
    int count = 0;
    char *pb, *ps;
    while (*str)
    {
        pb = str;
        ps = substr;
        while (*ps)
        {
            if (*pb == *ps)
            {
                pb++;
                ps++;
            }
            else
            {
                break;
            }
        }
        if (*ps == '\0')
        {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    printf("%d", strstrc("AABCD123ABCD123ABCDA", "ABCD"));
}
