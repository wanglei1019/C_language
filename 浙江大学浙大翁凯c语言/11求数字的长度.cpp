#include<stdio.h>

int main(){
	printf("输入一串长的数字求其长度：");
	int x;
	scanf("%d",&x);
	int n = 0;
	
	while(x > 0){
		x /= 10;
		n++;
	}
//	do{
//		x /= 10;
//		n++;//该方法不对 
//	}
//	while(x > 0);
	
	printf("数字长度n = %d",n);
	return 0; 
}
