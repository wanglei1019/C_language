#include<stdio.h>

int main(){
	printf("���������0~9������ͳ�������ֵĸ�����(-1�������)\n");
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
		printf("%d����%d��\n",i,array[i]);
	}
	return 0; 
}
