#include<stdio.h>

struct date {
	int month;
	int day;
	int year;
} myday;

int main(int argc,char const *argv[]){
	
	struct date *p = &myday;
	
	(*p).month  = 1;
	printf("(*p).month = %d\n",(*p).month);

	p->month = 2;
	printf("p->month = %d\n",p->month);
	 
	return 0;
} 
