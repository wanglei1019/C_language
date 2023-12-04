#include<stdio.h>

enum color {
	red,
	yellow,
	green
};

void fun(enum color c);

int main(void){
	
	enum color t = red;
	
	fun(t);
	
	return 0;
} 

//打印枚举变量的值 
void fun(enum color c){
	printf("%d\n",c);	
}
