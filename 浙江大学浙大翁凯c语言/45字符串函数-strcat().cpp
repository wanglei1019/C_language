#include<stdio.h>
#include<string.h>

int main(int argc,char const *argv[]){
	char dst[] = "Hello ";
	char src[] = "world!";
	
	printf("拷贝前dst的长度 = %d\n",strlen(dst));
	printf("拷贝前src的长度 = %d\n",strlen(src));
	printf("strcat(dst,src) = %s\n",strcat(dst,src));
	printf("拷贝后dst的长度 = %d\n",strlen(dst));
	 
	return 0;
}
