#include<stdio.h>

int main(){
	int amount = 0; 
	int price = 0;
	printf("��������ҵ�Ǯ");
	scanf("%d",&amount); 
	printf("���������ѽ��");
	scanf("%d",&price);//scanf����  f��ʽ�� 
	
	int change = amount - price;
	
	printf("�����Ǯ%d",change);
	
	return 0;
	
} 
