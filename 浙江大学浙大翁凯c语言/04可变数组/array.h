#ifndef _ARRAY_H_
#define _ARRAY_H_


typedef struct{
	int *array;
	int size;
} Array;		//����Ҳ���� *Array ������һ���ṹ��ָ�룬���ǲ��Ƽ��� 

Array array_create(int init_size);		//�����ɱ�����
void array_free(Array *a);		//free���ɱ����� 
int array_size(const Array *a);		//���ؿɱ�����ĳ��� 
int * array_at(Array *a, int index);		// 
void array_inflate(Array *a,int more_size);		//���ӿɱ�����ĳ���  

#endif
