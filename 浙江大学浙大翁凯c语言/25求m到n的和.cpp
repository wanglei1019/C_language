#include<stdio.h>
int anySum(int m,int n);

int main(){
	printf("��������m��������n�ĺ�\n");
	printf("please enter any two numbers:\n");
	int n,m;
	int sum;
	scanf("%d%d",&m,&n);
	sum = anySum(m,n);
	printf("%d��%d��ǰn���Ϊ%d",m<n?m:n,m>n?m:n,sum);

	
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
