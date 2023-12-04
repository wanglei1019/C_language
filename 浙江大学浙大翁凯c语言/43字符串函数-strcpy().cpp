#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(int argc,char const *argv[]){
	char src[] = "Hello world!";
	char *dst = (char*)malloc(strlen(src)+1);//sizeof(char)*sizeof(src)
	
	printf("strcpy(dst,src) = %s\n",strcpy(dst,src));
	printf("dst = %s\n",dst);//&dst[0]
	 
	return 0;
}
