#include<stdio.h>

int main(){
	printf("请任意输入一个正整数：\n");
	int n; 
	scanf("%d",&n);
	
	int t  = n;
	int maxn = 1; 
	while(t > 9){
		t /= 10;
		maxn *= 10;
	}
	printf("n = %d, maxn = %d\n",n,maxn);
	
	do{
		int d = n/maxn;
		printf("%d ",d);
		
		n %= maxn;
		maxn /= 10;		
	}while(maxn > 0);
	printf("\n");
	return 0; 
}
