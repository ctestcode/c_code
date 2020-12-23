//入门题库->4.字符处理->13.字符串查找
//编写字符串查找函数 strstr,如果指定字符串是str字符串的元素，返回元素所在的首地址，否则，返回NULL。
#include <stdio.h>
char *strstr(char *str, char *substr)
{
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
            return str;
        }
        str++;
    }
    return NULL;
}
int main()
{
    char s1[100] = "AABCD123ABCD123ABCDA";
    char s2[100] = "123";
    printf("%s", strstr(s1, s2));
}
