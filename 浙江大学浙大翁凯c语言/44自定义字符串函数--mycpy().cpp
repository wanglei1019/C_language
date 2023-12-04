#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *mycpy1(char* dst,const char* src);
char *mycpy2(char* dst,const char* src);

int main(int argc,char const *argv[]){
	char src[] = "Hello world!";
	char *dst = (char*)malloc(strlen(src)+1);//sizeof(char)*sizeof(src)

	printf("mycpy1(dst,src) = %s\n",mycpy1(dst,src));
	printf("mycpy2(dst,src) = %s\n",mycpy2(dst,src));
	 
	return 0;
}
/**
	@自定函数
		mycpy(),复制字符串 
		mycpy1()  数组的方式实现
		mycpy2() 指针的方式实现 
*/ 
char *mycpy1(char* dst,const char* src){
	int inx = 0 ;
	while(src[inx]){//src[inx] != '\0'
	 	dst[inx] = src[inx];
	 	inx++;
	}
	dst[inx] = '\0';//dst[inx] = src[inx];

	return dst;
}
char *mycpy2(char* dst,const char* src){
	char * ret = dst;
	while(*dst++ = *src++);
	return ret;
}
/**
	@这里 *dst++ = *src++ 指针为什么又可以通过 自增自减 来移动指针？
	 1.无论 *s1++ == *s2++ 还是 *dst++ = *src++ 都可以移动指针
	 2.但要注意自增自减的指针是否指向了预想的地址。
	 3.*dst++在while做循环条件时要特别注意：即使条件不满足也会进行自增，这是当我们还要用这个指针时做其他事情时就要判断指针的指向问题（一般需要自减） 
*/

/**	
	@@mycpy2() 指针的方式实现，三种不同的循环写法 
	@1
	while(*src != '\0'){
	 	*dst = *src;
	 	dst++;
	 	src++;
	}
	@2
	while(*src){
	 	*dst++ = *src++;
	}
	@3
	while(*dst++ = *src++);
*/


