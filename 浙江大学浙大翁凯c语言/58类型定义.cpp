#include<stdio.h>

typedef struct ADate{
	int month;
    int day;
    int year;
} Date;

int main(int argc,char const *argv[]){	
	Date d = {01,01,2023};
	
	printf("d = %i-%i-%i",d.year,d.month,d.day);
	
	return 0;
}
