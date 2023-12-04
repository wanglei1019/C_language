#include<stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main(int argc,char const *argv[]){
	
	struct date today1;
	struct date today2; 
	
	today1 = (struct date){06,4,2023};
	
	today2 = today1;
	
	struct date *pDate = &today1; //»°µÿ÷∑ 
	
	printf("Today1's date is %i-%i-%i.\n",today1.year,today1.month,today1.day);
	printf("Today2's date is %i-%i-%i.\n",today2.year,today2.month,today2.day);
	
	printf("pDate = %p\n",pDate);
	 
	return 0;
} 

