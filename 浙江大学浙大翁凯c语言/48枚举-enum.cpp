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

//��ӡö�ٱ�����ֵ 
void fun(enum color c){
	printf("%d\n",c);	
}
