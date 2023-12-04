#include<stdio.h>

int main(){
	printf("输入任意个数，求平均值（若最后一个数为-1则认为输入结束，-1不计算）：");
	int n = 0,x;
	float count  = 0;
	float age;
	do{
		scanf("%d",&x);
		n++;
		count += x;
	}while(x != -1);
	age = (count+1)/(n-1);
	printf("输入%d个数的平均值为%.2f",n-1,age);
	
	return 0; 
}
