#include <stdio.h>
#include "main.h"
typedef struct node
{
    char character;    
    int size;
    double length;
}  __attribute__((packed))Size;
int main(int arge,const char* argv[])
{
    int x = sizeof(Size);
    int y = sizeof(double);
    int z = sizeof(int);
    int a = sizeof(char);
    printf("%d\n",y);
    printf("%d\n",z);
    printf("%d\n",a);
    printf("%d\n",x);
}