#include<stdio.h>

int main(int argc,char const *argv[]){
	FILE *fp = fopen("1.txt","r");
	if(fp){
		int num;
		fscanf(fp,"%d",&num);
		printf("%d\n",num);
		fclose(fp);
	} else{
		printf("文件不存在，或无法打开！\n");
	}
	
	return 0; 
}
