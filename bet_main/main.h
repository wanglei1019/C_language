#ifndef MAIN_H
#define MAIN_H
struct date
{
    int day;
    int month;
    int year;
};
extern struct date day,today;
int lastday(struct date today);
bool ifleap(struct date today);
#endif