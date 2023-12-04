#include<stdio.h>

int judgeRC(int array[][3],int size);
int judgeIn(int array[][3],int size);

int main(){
	const int size = 3;
	int array[size][size] = {0};//1代表x,0代表o 
	int j, i;
	int  ret; 
	
	
	printf("请输入9个数的井字棋：(只能输入0，1)\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&array[i][j]); 
		}
	}
	ret = judgeRC(array,size);
	ret = judgeIn(array,size);
	
	if(ret == 1){
		printf("x赢"); 
	}else if(ret == 0){
		printf("o赢"); 
	}else{
		printf("没人赢"); 
	}
	return 0; 
}
//判断行列 
int judgeRC(int array[][3],int size){
	int i, j;
	int ret = -1; //1代表x赢,0代表o赢，-1代表没结果。//数字1代表x,数字0代表o 
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
//判断对角线 
int judgeIn(int array[][3],int size){
	int i, j;
	int ret = -1; //1代表x赢,0代表o赢，-1代表没结果。//数字1代表x,数字0代表o 
	int numOfo = 0, numOfx = 0;
	//正对角线
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

 
