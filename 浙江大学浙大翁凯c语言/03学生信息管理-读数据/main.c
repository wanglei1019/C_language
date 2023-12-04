#include<stdio.h>
#include<stdlib.h>
#include "students.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp = fopen("student.data","r");
	if( fp ){
		fseek(fp,0L,SEEK_END);
		long size = ftell(fp);
		int number = size / sizeof(Student);
		int index = 0;
		printf("There are %d students. Which one do you want to see? Please write:",number);
		scanf("%d",&index);
		read(fp,index-1);
		fclose(fp); 
	}
	
	return 0;
}


//读学生信息
 
void read(FILE *fp, int index){
	fseek(fp,index*sizeof(Student),SEEK_SET);
	Student stu;
	if( fread(&stu,sizeof(Student),1,fp) == 1 ){
		printf("The %d student:",index+1);
		printf("\tname:%s\n",stu.name);
		printf("\tgender:");
		switch( stu.gender ){
			case 0:printf("male\n");break;
			case 1:printf("female\n");break;
			case 2:printf("other\n");break;
		}
		printf("\tage:%d\n",stu.age);
	}
}



























