#include<stdio.h>

int main(){
	printf("���������������ƽ��ֵ�������һ����Ϊ-1����Ϊ���������-1�����㣩��");
	int n = 0,x;
	float count  = 0;
	float age;
	do{
		scanf("%d",&x);
		n++;
		count += x;
	}while(x != -1);
	age = (count+1)/(n-1);
	printf("����%d������ƽ��ֵΪ%.2f",n-1,age);
	
	return 0; 
}
