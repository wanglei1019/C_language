#include<stdio.h>

int judgeRC(int array[][3],int size);
int judgeIn(int array[][3],int size);

int main(){
	const int size = 3;
	int array[size][size] = {0};//1����x,0����o 
	int j, i;
	int  ret; 
	
	
	printf("������9�����ľ����壺(ֻ������0��1)\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&array[i][j]); 
		}
	}
	ret = judgeRC(array,size);
	ret = judgeIn(array,size);
	
	if(ret == 1){
		printf("xӮ"); 
	}else if(ret == 0){
		printf("oӮ"); 
	}else{
		printf("û��Ӯ"); 
	}
	return 0; 
}
//�ж����� 
int judgeRC(int array[][3],int size){
	int i, j;
	int ret = -1; //1����xӮ,0����oӮ��-1����û�����//����1����x,����0����o 
	int numOfo = 0, numOfx = 0;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(array[i][j] == 1){
				numOfx++; 
			}else if(array[i][j] == 0){
				numOfo++;
			}
		}
		if(numOfo == 3){
			ret = 0;
		}
		else if(numOfx == 3){
			ret = 1;
		}
	}
	return ret;	
}
//�ж϶Խ��� 
int judgeIn(int array[][3],int size){
	int i, j;
	int ret = -1; //1����xӮ,0����oӮ��-1����û�����//����1����x,����0����o 
	int numOfo = 0, numOfx = 0;
	//���Խ���
	for(i=0;i<size;i++){
		if(array[i][i] == 1){
			numOfx++; 
		}else if(array[i][i] == 0){
			numOfo++;
		} 
		if(numOfo == 3){
			ret = 0;
		}
		else if(numOfx == 3){
			ret = 1;
		}
	}
	for(i=0;i<size;i++){
		if(array[i][size-i-1] == 1){
			numOfx++; 
		}else if(array[i][size-i-1] == 0){
			numOfo++;
		} 
		if(numOfo == 3){
			ret = 0;
		}
		else if(numOfx == 3){
			ret = 1;
		}
	}
	return ret;	
}

 
