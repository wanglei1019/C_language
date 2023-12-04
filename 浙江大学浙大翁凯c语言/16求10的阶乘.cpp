#include<stdio.h>

int main(){
	int n  = 10;
	int count = 1;
	int i;
	for(i=1;i<=n;i++){
		count *= i; 
	} 
	printf("10µÄ½×³Ëcount = %d",count);
}
