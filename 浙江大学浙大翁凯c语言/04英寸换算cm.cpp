#include<stdio.h>

int main(){
	int foot; 
	int inch;
	printf("请输入英尺英寸");
	scanf("%d %d",&foot,&inch); 

	printf("身高为%0.2fm",((foot+inch/12.0)*0.3048));
	
	return 0;
	
} 
