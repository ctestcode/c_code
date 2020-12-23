//入门题库->5.数学问题->7.比赛抽签
/*7.比赛抽签：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，
乙队为x,y,z三人。已抽签决定比赛名单，有人向队员打听比赛的名单，
a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单
*/
#include <stdio.h>
void print_list()
{
    char a, b, c;
    for (a = 'x'; a <= 'z'; a++)
        for (b = 'x'; b <= 'z'; b++)
            for (c = 'x'; c <= 'z'; c++)
                if (a != b && a != c && b != c)
                    if (a != 'x' && c != 'x' && c != 'z')
                        printf("order as a--%c\tb--%c\tc--%c\n",
                               a, b, c);
}
int main()
{
    print_list();
}
