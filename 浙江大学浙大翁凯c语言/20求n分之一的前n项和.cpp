#include<stdio.h>

int main(){
	printf("求1/n的前n项和");
	int i;
	int n;
	float sum = 0.0;
	scanf("%d",&n);
	for(i = 1; i<=n;i++){
		sum += i*1.0/n;
	} 
	printf("n分之一的前n项和为sum = %.2f",sum);
	return 0; 
}
