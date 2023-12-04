#include<stdio.h>
int anySum(int m,int n);

int main(){
	printf("求任意项m到任意项n的和\n");
	printf("please enter any two numbers:\n");
	int n,m;
	int sum;
	scanf("%d%d",&m,&n);
	sum = anySum(m,n);
	printf("%d到%d的前n项和为%d",m<n?m:n,m>n?m:n,sum);

	
	return 0; 
}
int anySum(int m,int n){
	int sum = 0;
	int i;
	for(i = (m<n?m:n); i <= (m>n?m:n); i++){
		sum += i;
	}
	return sum;
}
