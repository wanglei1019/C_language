#include<stdio.h>

int main(){
	printf("�������������Լ����������������");
	int a , b;
	scanf("%d%d",&a,&b);
	int i;
	int count;
	for(i = 1 ; i <= (a<b?a:b);i++){
		if(a%i == 0 && b%i == 0){
			count = i;
		}
	}
	printf("%d��%d�����Լ��Ϊ��%d",a,b,count);
	
	return 0; 
}
