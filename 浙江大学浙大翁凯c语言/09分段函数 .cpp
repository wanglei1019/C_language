#include<stdio.h>

int main(){
	
	int x = 0;
	
	scanf("%d",&x);
	int f; //单一出口 
	
	if(x > 0){
		f = 1;
		printf("%d",f);
	}else if(x < 0){
		f = -1;
		printf("%d",f);
	}else{
		f = 0;
		printf("%d",f);
	}
	
	return 0;
}
