#include<stdio.h>

int f(void);

int gAll;//默认初始化0，指针NULL 
 
int main(int argc,char const *argv[]){	
	
	printf("in %s gAll = %d\n",__func__, gAll);
	f();
	printf("agn %s gAll = %d\n",__func__, gAll);
	
	return 0;
}

int f(void){
	//int gAll = 100; 
	printf("in %s gAll = %d\n",__func__, gAll);
	gAll += 1;
	printf("agn %s gAll = %d\n",__func__, gAll);
}
