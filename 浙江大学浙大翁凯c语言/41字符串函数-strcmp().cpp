#include<stdio.h>
#include<string.h>
/**
	@���棺gcc��������	strcmp	���˴���ֻ�᷵��-1��1��0��
						#strncmp 
						1.��s1����s2,���ַ���������ȣ���ÿһ���ַ�����Ӧ��ȣ��򷵻�0
						2.��s1����s2,���αȽ�s1s2��ÿ���ַ���������s1���ַ�>s2���ַ������ǵ�һ�γ��֣������������ַ��Ĳ�ֵ������ �� �������Ƚ� 
						3��s1С��s2,���αȽ�s1s2��ÿ���ַ���������s1���ַ�<s2���ַ������ǵ�һ�γ��֣������������ַ��Ĳ�ֵ�������� �������Ƚ� 
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


