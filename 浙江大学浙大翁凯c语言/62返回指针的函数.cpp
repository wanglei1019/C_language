#include<stdio.h>
 
int *f(void);
void g(void);
 
int main(int argc,char const *argv[]){	

	int *p = f();
	printf("*p = %d\n",*p);
	g();
	printf("*p = %d\n",*p);	
	return 0;
}

int *f(void){
	int i = 1;
	printf("&f_i = %d\n",&i);
	return &i;
}

void g(void){
	int k = 24;
	printf("&g_k = %d\n",&k);
	printf("k = %d\n",k);
}
