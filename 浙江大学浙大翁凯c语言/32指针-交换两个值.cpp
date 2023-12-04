#include<stdio.h>

void swap(int *a, int *b);

int main(void){
	int a = 1, b = 2;
	int *pa, *pb;
	printf("a = %d, b = %d\n",a,b);
	pa = &a;
	pb = &b;
	swap(pa,pb);
	printf("a = %d, b = %d\n",a,b);
	
	
	return 0; 
}

//交换变量两个值 
void swap(int *pa, int *pb){
	int t;
	t = *pa;
	*pa = *pb;
	*pb = t;
}
