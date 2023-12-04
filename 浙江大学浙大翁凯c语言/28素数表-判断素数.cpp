#include<stdio.h>

int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes);

int main(){
	printf("��ӡǰ100������:\n");
	const int number = 100;
	int primes[number] = {2};
	int count = 1; //����������¼�����������ĸ��� 
	int i;
	for(i = 3; count < number; i++){
		if(isPrime(i,primes,count)){
			primes[count++] = i;
		}
	}
	for(i = 0; i < count;i++){
		printf("%d\t",primes[i]);
		if((i+1)%5 == 0){
			printf("\n");
		}
	}
	return 0; 
}
int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes){
	int ret = 1;
	int i;
	for(i = 0; i < numberOfKnownPrimes; i++){
		if(x % knownPrimes[i] == 0){
			ret = 0;
			break;
		}
	}
	return ret;
}
