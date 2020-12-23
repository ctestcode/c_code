//入门题库->9.实际应用->7.字符统计
//字符统计：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
#include <stdio.h>
void print_result(char *str)
{
    int letters = 0, spaces = 0, digits = 0, others = 0;
    char c;
    int i = 0;
    while ((c = str[i++]) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if (c == ' ')
            spaces++;
        else if (c >= '0' && c <= '9')
            digits++;
        else
            others++;
    }
    printf("letters=%d,digits=%d,spaces=%d,others=%d", letters, digits, spaces, others);
}
int main()
{
    char *str = "This is a test, 12345";
    print_result(str);
}
