#include<stdio.h>

/**
	@return ��������ɹ�������1�����򷵻�0 
*/
int divide(int a, int b, int *result);

int main(void){
	printf("���������������������\n");
	int a = 5;
	int b = 2;
	scanf("%d%d",&a,&b);
	int c;
	int* pc = &c;
	if(divide(a,b,pc)){
		printf("%d / %d  = %d",a,b,c);
	}else{
		printf("����Ϊ0���޷����");
	}
	
	
	return 0; 
}


int divide(int a, int b, int *result){
	int ret = 1;
	if(b == 0) ret = 0;
	else{
		*result = a / b;
	}
	return ret;
}
