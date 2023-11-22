#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(int argv, const char* arge[])
{
    array_int n = 0;
    printf("please input init size of array\n");
    scanf("%d",&n);
    Array a = array_create(n);
    printf("array size is %d\n",array_size(&a));
    for (array_int j=0;j<n;j++)
    {
        printf("array_pointer(&a,%d) = %d\n",j,*array_pointer(&a,j));
    }
    printf("array_size is %d\n",array_size(&a));
    array_int key = 0;
    while(key!=100)
    {
        printf("please input your want to see poistion 1 start or 0 end\n");
        scanf("%d",&key);
        switch (key)
        {
            case 1:
            {
                printf("please input number\n");
                array_int number = 0;
                scanf("%d",&number);
                printf("array_pointer(&a,%d) = %d\n",number,*array_pointer(&a,number));
            }
            // case 2:
            // {
            //     break;
            // }
        }        
    }
    array_free(&a);
    return 0;
}
//create a array
Array array_create(array_int init_size)
{
    Array b;
    b.size = init_size;
    b.array = (array_int*)calloc(init_size,sizeof(array_int));
    array_initvalue(&b);
    return b;
}
//read size of array
array_int array_size(const Array* a)
{
    return a->size;
}
//read special poistion of value
array_int array_get(const Array *a,array_int index)
{
    return a->array[index];
}
//modify special poistion of value
void array_set(Array* a,array_int index,array_int value)
{
    a->array[index] = value;
}
//release memony of array pointer
void array_free(Array* p)
{
    free(p->array);
    p->array = NULL;
    p->size = 0;
}
//modify the size of array
void array_enlarge(Array* a,const array_int more_size)
{
    array_int i = 0;
    array_int *p = (array_int*)realloc(a->array,sizeof(array_int)*(a->size + more_size));
    a->array = p;
    a->size += more_size;
}
//get back the specific value of poistion
int* array_pointer(Array* a,array_int index)
{
    if(index<1)
    {
        ;
    }
    if(index>a->size)
    {
        array_enlarge(a,(index/block_size+1)*block_size);
    }
    return &(a->array[index]);
}
//array init value
Array array_initvalue(Array* a)
{
    for(array_int i=0;i<a->size;i++)
    {
        a->array[i] = i;
    }
}