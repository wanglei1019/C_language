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
	printf("�����������·ݣ�");
	scanf("%d",&number);
	printf("�������%d����%s\n",number,month[number-1]);
	return 0; 
}
