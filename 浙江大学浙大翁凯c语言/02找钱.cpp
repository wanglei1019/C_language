#include<stdio.h>

int main(){
	const int AMOUNT = 100; 
	int price = 0;
	printf("������");
	scanf("%d",&price);//scanf����  f��ʽ�� 
	
	int change = AMOUNT - price;
	
	printf("�����Ǯ%d",change);
	
	return 0;
	
} 
