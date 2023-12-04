#include<stdio.h>

int f(void);
 
 
int main(int argc,char const *argv[]){	

	f();
	f();
	f();
	
	return 0;
}

int f(void){
	static int all = 100; 
	printf("in %s all = %d\n",__func__, all);
	all += 100;
	printf("agn %s all = %d\n",__func__, all);
}
