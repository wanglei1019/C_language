#include<stdio.h>

int main(){
	int foot; 
	int inch;
	printf("������Ӣ��Ӣ��");
	scanf("%d %d",&foot,&inch); 

	printf("���Ϊ%0.2fm",((foot+inch/12.0)*0.3048));
	
	return 0;
	
} 
