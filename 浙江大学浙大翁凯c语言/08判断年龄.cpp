#include<stdio.h>

int main(){
	
	const int AGE = 18;
	int age = 0;
	printf("请输入你的年龄："); 
	scanf("%d",&age);
	if(age <= AGE)
		printf("光华依旧！"); 
	else
		printf("韶光易逝！"); 
	
	return 0;
} 
