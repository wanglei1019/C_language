#include<stdio.h>

int main(){
	printf("a=1,b=2\n");
	int a = 1;
	int b = 2;
	printf("a++=%d\n",a++);//输出加之前的数 
	printf("a=%d\n",a);
	printf("++b=%d\n",++b);//输出加之后的数 
	printf("b=%d\n",b);
	return 0;
	
} 
