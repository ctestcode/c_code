# c_code
C 语言实战题库。
关注公众号  ctestcode 加入C语言精通之旅

你也可以上传试题，试题内容可以加入自己署名信息，让更多人了解你哦。

# 格式 第一行选择分类
# 第二行开始是题目介绍 ，下面是代码格式举例

```C

//入门题库->2.特殊数字->1.奇数
/*1.奇数：输出1-100之间所有的奇数。
   written by 老张*/
#include <stdio.h>

void print_odd(int count)
{
    int i;
    for (i = 1; i <= count; i++)
        if (i % 2 == 1)
            printf("%d,", i);
}

int main()
{
    int count = 100;
    print_odd(count);
}

```
