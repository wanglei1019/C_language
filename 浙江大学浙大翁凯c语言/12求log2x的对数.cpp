#include<stdio.h>

int main(){
	printf("输入数字x：");
	int x;
	scanf("%d",&x);
	int n = 0,t = x;
	
	while(x > 1){  //log2 1 = 0;x=1时不进入循环 
		x /= 2;
		n++;
	}	
	printf("以2为底%d的对数是%d",t,n);
	return 0; 
}
