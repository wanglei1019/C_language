#include<stdio.h>

int main(){
	printf("��������x��");
	int x;
	scanf("%d",&x);
	int n = 0,t = x;
	
	while(x > 1){  //log2 1 = 0;x=1ʱ������ѭ�� 
		x /= 2;
		n++;
	}	
	printf("��2Ϊ��%d�Ķ�����%d",t,n);
	return 0; 
}
