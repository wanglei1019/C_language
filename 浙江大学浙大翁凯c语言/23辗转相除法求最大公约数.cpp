#include<stdio.h>

int main(){
	printf("求两个数的最大公约数，输入两个数：");
	int a , b, t;
	scanf("%d%d",&a,&b);
	while( b!=0 ){
		t = a%b;
		a = b;
		b = t;
	}
	printf("最大公约数为：%d",a,b,a);
	
	return 0; 
}
