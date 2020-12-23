//入门题库->4.字符处理->11.字符串替换
//编写字符串替换函数 repstr,将str字符串中出现的所有子串substr替换
#include <stdio.h>
void repstr(char *str, char *substr, char *repstr)
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
            ps = repstr;
            while (*ps)
                *str++ = *ps++;
        }
        else
        {
            str++;
        }
    }
}
int main()
{
    char str[100] = "abcdefabcdefabcdef";
    repstr(str, "abc", "XYZ");
    puts(str);
}
