#include<stdio.h>

int main(){
	printf("����һ�������������䳤�ȣ�");
	int x;
	scanf("%d",&x);
	int n = 0;
	
	while(x > 0){
		x /= 10;
		n++;
	}
//	do{
//		x /= 10;
//		n++;//�÷������� 
//	}
//	while(x > 0);
	
	printf("���ֳ���n = %d",n);
	return 0; 
}
