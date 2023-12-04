#include<stdio.h>

int main(){
	int hour1, minute1;
	int hour2,minute2;
	
	printf("请输入第一个时间\n"); 
	scanf("%d %d",&hour1,&minute1);
	printf("请输入第二个时间\n"); 
	scanf("%d %d",&hour2,&minute2);
	int hour = hour1 - hour2; 
	int number = minute1 - minute2;
	if(number < 0){	//防止分钟出现负数 
		number += 60;
		hour -= 1;
	}
	
	
	printf("俩个时间差为%d小时，%d分钟",hour,number); 
	return 0;
	
} 
