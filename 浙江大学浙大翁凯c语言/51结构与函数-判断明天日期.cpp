#include<stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int numberOfdays(struct date d);//年月日进制 

bool isLeap(struct date d);//判断闰年 

int main(int argc,char const *argv[]){
	
	struct date today,tomorrow;
	
	printf("Enter today's date (mm dd yyyy):");
	scanf("%i %i %i",&today.month,&today.day,&today.year);
	
	if( today.day != numberOfdays(today) ){
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}else if( today.year == 12 ){
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}else{
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	
	printf("Tomorrow's date is %i-%i-%i.\n",tomorrow.year,tomorrow.month,tomorrow.day);
	 
	return 0;
}


int numberOfdays(struct date d){
	
	int days;
	const int daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	if(d.month == 2 && isLeap(d)){
		days = 29;
	}else{
		days = daysPerMonth[d.month-1];
	}
	
	return days;
}

bool isLeap(struct date d){
	bool leap = false;
	
	if((d.year%4 == 0 && d.year%100 != 0) || d.year%400 == 0)
		leap = true;
	
	return leap;
}








