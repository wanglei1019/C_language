#include <stdio.h>
#include <stdlib.h>
#include "array.h"

const BLOCK_SIZE  = 20;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n = 0;
	scanf("%d",&n);
	Array a = array_create(n);
	
	printf("array_size(&a) = %d\n",array_size(&a));
	
	//*array_at(&a,0) = 9;
	//printf("*array_at(&a,0) = %d\n",*array_at(&a,0));
	
	int cnt;
	for(cnt = 0;cnt < n;cnt++){
		*array_at(&a,cnt) = cnt;
		//scanf("%d",array_at(&a,cnt));
		printf("*array_at(&a,%d) = %d\n",cnt,*array_at(&a,cnt));
	} 
	
	printf("array_size(&a) = %d\n",array_size(&a));
	array_free(&a);
	 
	return 0;
}

/**
*	1.创建可变数组
*	->传入长度，返回可变数组
*/
Array array_create(int init_size){
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int)*a.size);
	return a;
}

/**
*	2.free掉可变数组 - 封装 
*/	 
void array_free(Array *a){
	free(a->array);
	a->array = NULL;
	a->size = 0;
}

/**
*	3.返回可变数组的长度
*/
int array_size(const Array *a){
	return a->size;
}

/**
*	4.返回指向  第index位元素（包括0） 的指针 
*/
int* array_at(Array *a, int index){
	if(index < 1){
		;
	}
	if( index >= a->size ){
		array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE - a->size);
	}
	return &(a->array[index]);
}
/**
*	4.1.返回第index位的元素 
*/
int array_get(const Array *a,int index){
	return a->array[index];
}
/**
*	4.2.修改 第index位的元素 
*/
void array_set(Array *a, int index, int value){
	a->array[index] = value;
} 

/**
*	5.增加可变数组的长度
*/
void array_inflate(Array *a,int more_size){
	int i;
	int *p = (int *)malloc(sizeof(int)*(a->size+more_size));
	for(i=0; i<a->size; i++){
		p[i] = a->array[i];
	}
	free(a->array);
	a->array = p;
	a->size += more_size;
}
