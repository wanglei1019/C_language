#include<stdio.h>

int main(void){
	printf("输入任意个数，求平均值（若最后一个数为-1则认为输入结束，-1不计算）：\n");
		printf("并输出大于平均数的值\n");
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
	average = (count+1)/(n-1);//count+1因为do语句多加了一个-1,n-1是因为第n项是-1 
	for(i = 0; i < n-1;i++){
		if(number[i] > average){
			printf("number[%d] = %.0f\n",i,number[i]);
		}
		
	}	
	printf("输入%d个数的平均值为%.2f\n",n-1,average);
	
	return 0; 
}
