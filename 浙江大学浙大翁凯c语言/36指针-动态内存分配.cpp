#include<stdio.h>
#include<stdlib.h>

int main(void){
	//c99���������鶯̬�����ڴ� 
	int numOne;
	int i;
	printf("please number one:\n");
	scanf("%d",&numOne);
	int a[numOne] = {0};
	for(i = 0; i < numOne;i++){
		printf("numOne[%d] = %d\n",i,a[i]);
	}
	
	
	//c99֮ǰ����̬�����ڴ�
	int numTwo;
	int j;
	printf("please number two:\n");
	scanf("%d",&numTwo);
	int* p = (int *)malloc(numTwo*sizeof(int));
	for(j = 0; j < numTwo;j++){
		scanf("%d",p+j);//p+j == &p[j]
	}
	for(j = numTwo - 1; j >= 0;j--){
		printf("numTwo[%d] = %d\n",j,*(p+j));	//*(p+j) == &p[j]
	}
	free(p);
	return 0; 
}
