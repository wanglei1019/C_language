#include<stdio.h>

int main(){
	printf("输入任意个0~9整数，统计数出现的个数：(-1代表结束)\n");
	const int number = 10;
	int array[number] = {0};
	int x;
	int i = 0;
	scanf("%d",&x);
	while(x != -1){
		if(x >= 0 && x < number){
			array[x]++;
		}
		scanf("%d",&x);
	}
	
	for(i = 0; i <  number; i++){
		printf("%d出现%d次\n",i,array[i]);
	}
	return 0; 
}
