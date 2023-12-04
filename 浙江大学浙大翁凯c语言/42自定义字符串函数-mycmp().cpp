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
	@@�Զ���Ƚ��ַ������� mycmp()
		mycmp1()  ����ķ�ʽʵ��
		mycmp2() ָ��ķ�ʽʵ�� 
	@�Ƚ������ַ�����С
		1.��s1����s2,���ַ���������ȣ���ÿһ���ַ�����Ӧ��ȣ��򷵻�0
		2.��s1����s2,���αȽ�s1s2��ÿ���ַ���������s1���ַ�>s2���ַ������ǵ�һ�γ��֣������������ַ��Ĳ�ֵ������ �� �������Ƚ� 
		3��s1С��s2,���αȽ�s1s2��ÿ���ַ���������s1���ַ�<s2���ַ������ǵ�һ�γ��֣������������ַ��Ĳ�ֵ�������� �������Ƚ�
	
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
	@����mycmp2()��Ϊʲôѭ������д��while(*s1++ == *s2++ && *s1 != '\0'); Ϊʲô�أ� 
		1.��Ȼ����д��������������Ҫ����һ��-> while(*s1++ == *s2++ && *(s1-1) != '\0');
		2.*s1++ == *s2++��ÿ�αȽϽ�����ָ��������ָ����ƣ���
		���жϵ����һλ'\0'ʱ��*(s1-1) != '\0'������s1ָ���'\0'������ַ�,��Ҫ-1����ָ��'\0'
		3.�ʵ��ȽϽ������ص�ʱ��������Ҫ��s1��s2ǰ�Ƽ�һ����ָ��ָ����ȷ��ֵ �磺mycmp3()		 
*/ 

