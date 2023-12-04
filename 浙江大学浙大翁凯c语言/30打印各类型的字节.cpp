#include<stdio.h>

int main(){
	float i;
	double j; 
	printf("sizeof short = %d\n",sizeof(short));
	printf("sizeof int = %d\n",sizeof(int));
	printf("sizeof char = %d\n",sizeof(char));
	printf("sizeof float = %d\n",sizeof(i));
	printf("sizeof double = %d\n",sizeof(j));
	printf("sizeof long = %d\n",sizeof(long));
	printf("sizeof long long = %d\n",sizeof(long long));
	printf("sizeof long double = %d\n",sizeof(long double));
	printf("sizeof _Bool = %d\n",sizeof(bool));
	return 0; 
}
