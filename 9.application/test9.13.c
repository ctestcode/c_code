//入门题库->9.实际应用->13.渔民打鱼
//中国有句俗语叫“三天打鱼两天晒网”。假设某人从某天起，开始“三天打鱼两天晒网”，问这个人在以后得第N天中是“打鱼”还是“晒网”？
#include <stdio.h>
void print_result(int day)
{
    if (day % 5 == 1 || day % 5 == 2 || day % 5 == 3)
    {
        printf("Fishing in day %d\n", day);
    }
    else
    {
        printf("Drying in day %d\n", day);
    }
}
int main()
{
    int day = 15;
    print_result(day);
}
