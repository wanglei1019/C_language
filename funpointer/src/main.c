#include <stdio.h>
#include <stdlib.h>
#include "main.h"

typedef int (*func)(int,int);

int main()
{
    int a = 1000;
    int b=2000;
    int (*p)(int,int) = Afunction("ADD",ADD);
    printf("%d\n",p(a,b));
}
func Afunction(char* func,int (*p)(int,int))
// int (*Afunction(char* func,int (*p)(int,int)))(int,int)
{
    if(func == "ADD")
    {
        return p;
    }
    else 
    {
        return NULL;
    }
}
int ADD(int a,int b)
{
    return a+b;
}