#include<stdio.h>
#include<string.h>

char * mycat1(char *dst,const char *src);
char * mycat2(char *dst,const char *src);

int main(int argc,char const *argv[]){
	char dst[] = "Hello ";
	char src[] = "world!";
	
	printf("mycat1(dst,src) = %s\n",mycat1(dst,src));
	printf("mycat2(dst,src) = %s\n",mycat2(dst,src));
	return 0;
}
/**
	@自定函数
		mycat(),复制字符串 
		mycat1()  数组的方式实现
		mycat2() 指针的方式实现 
*/ 
char * mycat1(char *dst,const char *src){
	int inx = 0;
	
	int dstlen = strlen(dst);
	while(src[inx] != '\0'){	
		dst[dstlen+inx] = src[inx];
		inx++;	
	}
	dst[dstlen+inx] = '\0';
	return dst;	
}

char * mycat2(char *dst,const char *src){
	char *ret = dst;
	dst = dst + strlen(dst);//det->'\0' 
	while(*dst++ = *src++);
	return ret;	
}
/**
	@while(*dst++ = *src++);循环结束指针的指向问题
		1.首先声明++的优先级高于*，虽然是是dst++，但取值*是++之前的地址 
		2.循环条件一次执行的顺序：src自增，dst自增 -> 然后把src自增之前指向的位置取值*,赋值给dst自增之前的指向的位置 
			-> 判断dst自增之前的向的位置的值是否为 '\0' 
		3.显然，易知src代表的那个字符串最后一位'\0'一定会赋值在dst代表那个字符串最后一位，为什么？因为当while判断'\0'循环才会退出
		4.这时当循环退出时，src，dst都已经自增， src指向src那个字符串'\0'的后面一位，dst指向dst那个字符串'\0'的后面一位
		5.这时我们发现 src，dst 这两个字符串的指针都已经越界访问了，所以*dst = '\0';时是多余的，或着说是不必要的 

*/
