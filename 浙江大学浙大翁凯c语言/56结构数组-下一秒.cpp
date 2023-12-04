#include<stdio.h>

struct time {
	int hour;
	int minutes;
	int seconds;
};

struct time timeUpdate(struct time);

int main(int argc,char const *argv[]){
	
	struct time testTimes[] = {
		{11,59,59},
		{12,0,0},
		{13,29,59},
		{23,59,59},
		{0,39,59}
	};
	int i;
	
	for( i = 0; i<5; i++){
		printf("Time is %.2i:%.2i:%.2i\n",
			testTimes[i].hour,testTimes[i].minutes,testTimes[i].seconds);
			
		testTimes[i] = timeUpdate(testTimes[i]);
		
		printf("...one second later it's %.2i:%.2i:%.2i\n",
			testTimes[i].hour,testTimes[i].minutes,testTimes[i].seconds);
	}
	
	return 0;
}

struct time timeUpdate(struct time now){
	now.seconds++;
	if(now.seconds == 60){
		now.seconds = 0;
		now.minutes++;
		
		if(now.minutes == 60){
			now.minutes = 0;
			now.hour++;
			
			if(now.hour == 24){
				now.hour = 0;
			}
		}
	}
	return now;
}





