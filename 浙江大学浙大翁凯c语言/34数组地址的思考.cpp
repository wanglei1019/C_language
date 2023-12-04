#include<stdio.h>

int main(){
	int a[10] = {0};
	
	printf("a = %p\n",a);
	printf("&a = %p\n",&a);
	printf("a[0] = %d\n",a[0]);
	printf("&a[0] = %p\n",a[0]);
	return 0; 
}
