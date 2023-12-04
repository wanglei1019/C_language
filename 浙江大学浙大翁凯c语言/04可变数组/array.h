#ifndef _ARRAY_H_
#define _ARRAY_H_


typedef struct{
	int *array;
	int size;
} Array;		//我们也长用 *Array 重命名一个结构体指针，但是不推荐用 

Array array_create(int init_size);		//创建可变数组
void array_free(Array *a);		//free掉可变数组 
int array_size(const Array *a);		//返回可变数组的长度 
int * array_at(Array *a, int index);		// 
void array_inflate(Array *a,int more_size);		//增加可变数组的长度  

#endif
