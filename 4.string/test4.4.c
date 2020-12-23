//入门题库->4.字符处理->4.字符串反转
//编写字符串反转函数 reverse
#include <stdio.h>
void reverse(char *str)
{
    char *start = str, *end = str, t;
    while (*end++);
    end -= 2;
    while (start < end)
    {
        t = *start;
        *start++ = *end;
        *end-- = t;
    }
}
int main()
{
    char str[100] = "123456789";
    reverse(str);
    puts(str);
}
