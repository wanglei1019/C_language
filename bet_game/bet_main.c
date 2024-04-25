#include <stdio.h>
#include <stdbool.h>
// #include "main.h"
struct date
{
    int day;
    int month;
    int year;
};
// extern struct date day,today;
int lastday(struct date today);
bool ifleap(struct date today);
// struct date tommorrow,today;
int main(int argv,const char* argr)
{
    struct date today,tommorrow;
    printf("please input the date of today, \
    following year,month and day\n");
    scanf("%d %d %d",&today.year,&today.month,&today.day);
    if(today.day != lastday(today))
    {
        tommorrow.day = today.day + 1;
        tommorrow.month = today.month;
        tommorrow.year = today.year;
    }
    else if(today.month == 12)
    {
        tommorrow.day = 1;
        tommorrow.month = 1;
        tommorrow.year = today.year+1;
    }
    else
    {
        tommorrow.day = 1;
        tommorrow.month = today.month+1;
        tommorrow.year = today.year;
    }
    printf("today date is %d-%d-%d\n",today.year,today.month,today.day);
    printf("tomorrow date is %d-%d-%d\n",tommorrow.year,tommorrow.month,tommorrow.day);
    return 0;
}
int lastday(struct date today)
{
    int days=0;
    const int daypermonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(today.month==2 && ifleap(today))
    {
        days = 29;
    }
    else
    {
        days = daypermonth[today.month - 1];
    }
    return days;
}
bool ifleap(struct date today)
{
    bool leap = false;
    if((today.year%4==0 && today.year%100!=0) || today.year%400==0)
    {
        leap = true;
    }
    return leap;
} 