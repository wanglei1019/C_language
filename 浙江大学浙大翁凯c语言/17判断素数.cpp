#include<stdio.h>

int main(){
	printf("����һ�������ж�����(����)��\n");
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
		printf("%d��һ������",x);
	}else{
		printf("%d����һ������",x);
	}

	
	return 0; 
}
