#include<stdio.h>
int isPrime(int x,int isprime){//�ж�������������������0 
	int i;
	for(i = 2;i<x;i++){
			if(x%i == 0){
				isprime = 0;
				break;
			}
		}
	return isprime;
}
int main(){
	printf("���100���ڵ�����\n");
	int i;
	int x;
	int cnt = 0;//������,���������ĸ��� 
	int isprime = 1;
	for(x = 1;x<100;x++){
		int i;
		int isprime = 1;
		
		if(x != 1 && isPrime(x,isprime) == 1){
			cnt++; 
			printf("%d\t",x);
			if(cnt % 5 == 0){//per five number to next row 
				printf("\n"); 
			}
		}
	} 

	return 0; 
}
