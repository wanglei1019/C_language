#include<stdio.h>

/**
	@return 如果除法成功，返回1，否则返回0 
*/
int divide(int a, int b, int *result);

int main(void){
	printf("请输入两个数，（相除）\n");
	int a = 5;
	int b = 2;
	scanf("%d%d",&a,&b);
	int c;
	int* pc = &c;
	if(divide(a,b,pc)){
		printf("%d / %d  = %d",a,b,c);
	}else{
		printf("除数为0，无法相除");
	}
	
	
	return 0; 
}


int divide(int a, int b, int *result){
	int ret = 1;
	if(b == 0) ret = 0;
	else{
		*result = a / b;
	}
	return ret;
}
