#include<stdio.h>

int main(void){
	printf("���������������ƽ��ֵ�������һ����Ϊ-1����Ϊ���������-1�����㣩��\n");
		printf("���������ƽ������ֵ\n");
	int n = 0;
	int x;
   	float number[100];
	float average = 0;
	float count = 0;
	do{
		scanf("%d",&x);
		number[n] = x; 
		count += number[n];
		n++;
	}while(x != -1);
	
	int i;
	average = (count+1)/(n-1);//count+1��Ϊdo�������һ��-1,n-1����Ϊ��n����-1 
	for(i = 0; i < n-1;i++){
		if(number[i] > average){
			printf("number[%d] = %.0f\n",i,number[i]);
		}
		
	}	
	printf("����%d������ƽ��ֵΪ%.2f\n",n-1,average);
	
	return 0; 
}
