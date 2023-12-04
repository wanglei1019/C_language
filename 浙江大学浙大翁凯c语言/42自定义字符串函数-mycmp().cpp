#include<stdio.h>
#include<string.h>

int mycmp1(const char* s1,const char* s2);
int mycmp2(const char* s1,const char* s2);
int mycmp3(const char* s1,const char* s2);

int main(int argc,char const *argv[]){
	 char s1[] = "abc";
	 char s2[] = "Abc";
	
	printf("mycmp1(s1,s2) = %d\n",mycmp1(s1,s2));
	printf("mycmp2(s1,s2) = %d\n",mycmp2(s1,s2));
	printf("mycmp2(s1,s2) = %d\n",mycmp3(s1,s2));
	return 0;
	
}
/*
	@@自定义比较字符串函数 mycmp()
		mycmp1()  数组的方式实现
		mycmp2() 指针的方式实现 
	@比较两个字符串大小
		1.若s1等于s2,若字符串长度相等，且每一个字符都对应相等，则返回0
		2.若s1大于s2,依次比较s1s2的每个字符，若存在s1的字符>s2的字符，且是第一次出现，返回这两个字符的差值（正数 ） ，结束比较 
		3若s1小于s2,依次比较s1s2的每个字符，若存在s1的字符<s2的字符，且是第一次出现，返回这两个字符的差值（负数） ，结束比较
	
*/ 
int mycmp1(const char* s1,const char* s2){
	int index = 0;
	while(s1[index] == s2[index] && s1[index] != '\0'){
		index++;
	}
	return s1[index] - s2[index];
}

int mycmp2(const char* s1,const char* s2){
	while(*s1 == *s2 && *s1 != '\0'){
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

int mycmp3(const char* s1,const char* s2){
	while(*s1++ == *s2++ && *(s1-1) != '\0');
	return *(s1-1) - *(s2-1);	//*--s1 - *--s2
}
/**
	@函数mycmp2()中为什么循环不能写成while(*s1++ == *s2++ && *s1 != '\0'); 为什么呢？ 
		1.当然可以写成这样，不过需要给动一下-> while(*s1++ == *s2++ && *(s1-1) != '\0');
		2.*s1++ == *s2++，每次比较结束后指针自增（指向后移），
		当判断到最后一位'\0'时，*(s1-1) != '\0'，这是s1指向的'\0'后面的字符,故要-1令其指向'\0'
		3.故当比较结束返回的时候，我们需要对s1，s2前移减一，让指针指向正确的值 如：mycmp3()		 
*/ 

