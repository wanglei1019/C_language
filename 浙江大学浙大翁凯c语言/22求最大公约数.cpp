#include<stdio.h>

int main(){
	printf("求两个数的最大公约数，输入两个数：");
	int a , b;
	scanf("%d%d",&a,&b);
	int i;
	int count;
	for(i = 1 ; i <= (a<b?a:b);i++){
		if(a%i == 0 && b%i == 0){
			count = i;
		}
	}
	printf("%d和%d的最大公约数为：%d",a,b,count);
	
	return 0; 
}
