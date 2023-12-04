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
	@�Զ�����
		mycpy(),�����ַ��� 
		mycpy1()  ����ķ�ʽʵ��
		mycpy2() ָ��ķ�ʽʵ�� 
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
	@���� *dst++ = *src++ ָ��Ϊʲô�ֿ���ͨ�� �����Լ� ���ƶ�ָ�룿
	 1.���� *s1++ == *s2++ ���� *dst++ = *src++ �������ƶ�ָ��
	 2.��Ҫע�������Լ���ָ���Ƿ�ָ����Ԥ��ĵ�ַ��
	 3.*dst++��while��ѭ������ʱҪ�ر�ע�⣺��ʹ����������Ҳ��������������ǵ����ǻ�Ҫ�����ָ��ʱ����������ʱ��Ҫ�ж�ָ���ָ�����⣨һ����Ҫ�Լ��� 
*/

/**	
	@@mycpy2() ָ��ķ�ʽʵ�֣����ֲ�ͬ��ѭ��д�� 
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


