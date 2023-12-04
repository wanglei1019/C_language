#include<stdio.h>
#include<string.h>
/**
	@警告：gcc编译器对	strcmp	做了处理，只会返回-1、1、0；
						#strncmp 
						1.若s1等于s2,若字符串长度相等，且每一个字符都对应相等，则返回0
						2.若s1大于s2,依次比较s1s2的每个字符，若存在s1的字符>s2的字符，且是第一次出现，返回这两个字符的差值（正数 ） ，结束比较 
						3若s1小于s2,依次比较s1s2的每个字符，若存在s1的字符<s2的字符，且是第一次出现，返回这两个字符的差值（负数） ，结束比较 
*/ 

int main(int argc,char const *argv[]){
	 char s1[] = "abc";
	 char s2[] = "aBc"; 
//	const char *s1p = s1;
//	const char *s2p = s2;
	
	printf("strcmp(s1,s2) = %d\n",strcmp(s1,s2));//32
	printf("strcmp(&s1[0],&s2[0]) = %d\n",strcmp(&s1[0],&s2[0]));//32
	printf("strcmp((s1+2),(s2+1)) = %d\n",strcmp((s1+2),(s2+1)));//33  'c'-'B'
	printf("'b'-'B' = %d\n\n",'b'-'B');//32
	
	return 0;
	
}


