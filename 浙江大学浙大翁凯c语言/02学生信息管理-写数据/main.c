#include <stdio.h>
#include <stdlib.h>
#include "getListAndSave.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char const *argv[]) {
	
	int number = 0;
	printf("Please enter the number of students:");
	scanf("%d",&number);
	Student aStu[number];
	
	getList(aStu,number);
	if( save(aStu,number) ){
		printf("save successfully!\n");
	}else{
		printf("fail to preserve!\n");
	}
		
	return 0;
}




























