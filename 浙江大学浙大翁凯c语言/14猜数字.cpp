#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main(){
	printf("ϵͳ�Ѿ�����һ�������������°ɣ�\n");
	srand(time(0));
	int r = rand()%100+1;
	printf("%d\n",r);
	int x;
	int n = 1;
	scanf("%d",&x);
	while(x != r){
		if(x > r){
			printf("�´��������\n");
			scanf("%d",&x);
			n++;
		}else{
			printf("��С�������\n");
			scanf("%d",&x);
			n++;
		}
	}
	printf("��ϲ��¶��ˣ�������%d��\n",n);
	return 0; 
}
