#include<stdio.h>

int main(){
	printf("�������������Լ����������������");
	int a , b, t;
	scanf("%d%d",&a,&b);
	while( b!=0 ){
		t = a%b;
		a = b;
		b = t;
	}
	printf("���Լ��Ϊ��%d",a,b,a);
	
	return 0; 
}
