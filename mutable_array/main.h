#ifndef __MAIN_H__
#define __MAIN_H__
#define block_size 20
typedef int array_int;
typedef struct code
{
    array_int size;
    array_int* array;
}Array;
extern Array a;


Array array_create(array_int init_size);
array_int array_size(const Array* a);
array_int array_get(const Array *a,array_int index);
void array_set(Array* a,array_int index,array_int value);
void array_free(Array* p);
void array_enlarge(Array* a,const array_int more_size);
int* array_pointer(Array* a,array_int index);
Array array_initvalue(Array* a);
#endif