#include<stdio.h>

int main(){
	const char* month[] = {
		"january",
		"february",
		"march",
		"april",
		"may",
		"june",
		"july",
		"august",
		"september",
		"october",
		"november",
		"december" 
	};
	int number;
	int *p;
	printf("请输入数字月份：");
	scanf("%d",&number);
	printf("你输入的%d月是%s\n",number,month[number-1]);
	return 0; 
}
