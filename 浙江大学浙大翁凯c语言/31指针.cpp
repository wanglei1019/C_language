#include<stdio.h>

void fun1(int *p);

int main(void){
	int i = 6;
	int *p;
	p = &i;
	printf("&i = %p\n",&i);
	printf("i = %d\n",i);
	fun1(p);
	printf("i = %d\n",i);//��������ͨ��ָ����Ըı������ֵ 
	return 0; 
}

void fun1(int *p){
	printf("fun1 p = %p\n",p);
	printf("fun1 *p = %d\n",*p);
	*p = 26;
}
