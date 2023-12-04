#include<stdio.h>
#include<string.h>

size_t mylen(const char* str);

int main(int argc,char const *argv[]){
	char line[] = "Hello world!";
	
	printf("strlen = %lu\n",strlen(line));
	printf("sizeof = %lu\n",sizeof(line));
	printf("mylen = %lu\n",mylen(line));
	
	return 0;
	
}

//自定义--输出字符串长度函数 
size_t mylen(const char* str){
	
	int lenth = 0;
	
	while( str[lenth] != '\0'){
		lenth++;
	}
	return lenth;
}
