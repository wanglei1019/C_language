#include<stdio.h>

int main(){
	int hour1, minute1;
	int hour2,minute2;
	
	printf("�������һ��ʱ��\n"); 
	scanf("%d %d",&hour1,&minute1);
	printf("������ڶ���ʱ��\n"); 
	scanf("%d %d",&hour2,&minute2);
	int hour = hour1 - hour2; 
	int number = minute1 - minute2;
	if(number < 0){	//��ֹ���ӳ��ָ��� 
		number += 60;
		hour -= 1;
	}
	
	
	printf("����ʱ���Ϊ%dСʱ��%d����",hour,number); 
	return 0;
	
} 
