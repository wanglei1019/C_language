#include "students.h"

//����ѧ����Ϣ 
void getList(Student aStu[] ,int number){
	char format[STR_LEN];
	sprintf(format,"%%%ds",STR_LEN-1); //%%���%  ��ʱ���format����"%19s"
	
	int i;
	for( i=0; i<number; i++){
		printf("The %d student:\n",i);
		printf("\tname:");
		scanf(format,aStu[i].name);	//name�Ǹ��ַ�������Ҫ&ȡַ 
		printf("\tgender(0-male,1-female,2-other):");
		scanf("%d",&aStu[i].gender);
		printf("\tage:");
		scanf("%d",&aStu[i].age);
	}
}

//�ļ���д������ 
int save(Student aStu[], int number){
	int ret = -1;
	FILE *fp = fopen("student.data","w");
	if(fp){
		ret = fwrite(aStu,sizeof(Student),number,fp);
		fclose(fp);
	}
	return ret == number; 
}
