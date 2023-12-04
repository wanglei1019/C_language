#include<stdio.h>

int main(){
	printf("输入一个数，判断素数(质数)：\n");
	int x;
	scanf("%d",&x);
	int i;
	int isprime = 1;
	
	for(i = 2;i<x;i++){
		if(x%i == 0){
			isprime = 0;
			break;
		}
	}
	if(x != 1 && isprime == 1){
		printf("%d是一个素数",x);
	}else{
		printf("%d不是一个素数",x);
	}

	
	return 0; 
}
