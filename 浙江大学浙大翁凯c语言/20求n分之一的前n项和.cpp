#include<stdio.h>

int main(){
	printf("��1/n��ǰn���");
	int i;
	int n;
	float sum = 0.0;
	scanf("%d",&n);
	for(i = 1; i<=n;i++){
		sum += i*1.0/n;
	} 
	printf("n��֮һ��ǰn���Ϊsum = %.2f",sum);
	return 0; 
}
