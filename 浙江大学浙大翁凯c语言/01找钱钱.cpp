#include<stdio.h>

int main(){
	int amount = 0; 
	int price = 0;
	printf("请输入给我的钱");
	scanf("%d",&amount); 
	printf("请输入消费金额");
	scanf("%d",&price);//scanf函数  f格式化 
	
	int change = amount - price;
	
	printf("找你的钱%d",change);
	
	return 0;
	
} 
