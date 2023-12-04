#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char const *argv[]){
	
	char s[] = "hello world!";

//	strchr();		
	char *p = strchr(s,'l');
	printf("strchr(s,'l') = %s\n",p);

//	*p取前面的字符 
	char c = *p;
	*p = '\0';
	char *tt = (char *)malloc(strlen(p)+1);
	strcpy(tt,s);
	printf("tt = %s\n",tt);
	*p = 'l';
	free(tt); 
	
//	*p取后面的字符 
	char *t = (char *)malloc(strlen(p)+1);
	strcpy(t,p);
	printf("t = %s\n",t);
	free(t);
	
//	取字符串第二个l 
	p = strchr(p+1,'l');
	printf("strchr(p+1,'l') = %s\n",p);
	
//	strrchr();
	char *pp = strrchr(s,'l');
	printf("strrchr(s,'l') = %s\n",pp);
	pp = strrchr(pp-1,'l');
	printf("strrchr(p-1,'l') = %s\n",pp);
	return 0; 
}
