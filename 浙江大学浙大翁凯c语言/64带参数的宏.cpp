#include<stdio.h>

#define cube(x) ((x)*(x)*(x))

#define A1(x) (x*10)
#define A2(x) ((x)*10)

int main(int argc,char const *argv[]){	
	int i;
	scanf("%d",&i);
	printf("%d\n",cube(i+2));
	
	printf("%d\n",A1(3));
	printf("%d\n",A2(10));
	

	return 0;
}

