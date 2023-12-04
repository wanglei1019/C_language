#include<stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main(int argc,char const *argv[]){
	
	struct date today1;
	
	today1.month = 06;
	today1.day = 3;
	today1.year = 2023;
	
	struct date today2 = {06,4,2023};
	
	struct date today3 = {.month = 06, .year = 2023};//´úÂëÕıÈ· 
	
	printf("Today1's date is %i-%i-%i.\n",today1.year,today1.month,today1.day);
	printf("Today2's date is %i-%i-%i.\n",today2.year,today2.month,today2.day);
	printf("Today3's date is %i-%i-%i.\n",today3.year,today3.month,today3.day);
	
	return 0;
} 


