#include<stdio.h>

int main(){
	const int AMOUNT = 100; 
	int price = 0;
	printf("请输入");
	scanf("%d",&price);//scanf函数  f格式化 
	
	int change = AMOUNT - price;
	
	printf("找你的钱%d",change);
	
	return 0;
	
} 
