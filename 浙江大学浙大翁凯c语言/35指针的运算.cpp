#include<stdio.h>

int main(void){
	char ca[] = {1,2,3,4,5,6,7,8,9,};
	char *cp = ca;
	int ia[] = {1,2,3,4,5,6,7,8,9,};
	int *ip = ia;
	double da[] = {1,2,3,4,5,6,7,8,9,};
	double *dp = da;
	
	printf("指针操作：\n");
	printf("cp = %p\n",cp); 
	printf("cp+1 = %p\n",cp+1);
	printf("*cp = %d\n",*cp);
	printf("*(cp+1) = %d\n",*(cp+1));
	
	printf("\n数组变量操作：\n");
	printf("ca = %p\n",ca); 
	printf("ca+1 = %p\n",ca+1);
	printf("*ca = %d\n",*ca); 
	printf("*(ca+1) = %d\n",*(ca+1));
	
	
	printf("\n\n\n");
	printf("ip = %p\n",ip); 
	printf("ip+1 = %p\n",ip+1); 
	
	printf("\n\n\n");
	printf("dp = %p\n",dp); 
	printf("dp+1 = %p\n",dp+1); 
	return 0; 
}
