#include<stdio.h>
#include<string.h>

int main(int argc,char const *argv[]){
	char dst[] = "Hello ";
	char src[] = "world!";
	
	printf("����ǰdst�ĳ��� = %d\n",strlen(dst));
	printf("����ǰsrc�ĳ��� = %d\n",strlen(src));
	printf("strcat(dst,src) = %s\n",strcat(dst,src));
	printf("������dst�ĳ��� = %d\n",strlen(dst));
	 
	return 0;
}
