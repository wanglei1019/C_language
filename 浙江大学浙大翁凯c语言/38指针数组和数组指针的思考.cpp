#include<stdio.h>

int main(){
	const char* month[] = {//指针数组，指针的数组集合 
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
	
	//两种方法打印某行的地址 
	printf("month的地址 = %p\n",month);
	printf("month+1的地址 = %p\n",month+1);//指针数组的第二个指针取地址 
	
	printf("&month[0]的地址 = %p\n",&month[0]);
	printf("&month[1的地址] = %p\n\n",&month[1]); 
	
	
	//两种方法打印某行的值 
	printf("*month = %s\n",*month);
	printf("*(month+1)= %s\n",*(month+1));//指针数组的第二个指针取值 
	
	printf("month[0] = %s\n",month[0]);
	printf("month[1]= %s\n\n",month[1]);//指针数组的第二个指针取值 ,取第二行 
	;
	
	//四种方法打印某行某列的字符的值 
	printf("march第2个字符(*(month+2))[1] = %c\n",(*(month+2))[1]);//数组(字符串)指针 ，指向数组（字符串）的指针
	printf("march第3个字符(*(month+2))[2] = %c\n",(*(month+2))[2]); 
	
	printf("march第2个字符*(*(month+2)+1) = %c\n",*(*(month+2)+1));
	printf("march第3个字符*(*(month+2)+2) = %c\n",*(*(month+2)+2));
	
	printf("march第2个字符*(month[2]+1) = %c\n",*(month[2]+1));
	printf("march第3个字符*(month[2]+2) = %c\n",*(month[2]+2));
	
	printf("march第2个字符month[2][2] = %c\n",month[2][1]);
	printf("march第3个字符month[2][2] = %c\n\n",month[2][2]);
	
	
	//四种方法打印某行某列的字符的值地址 
	printf("march第2个字符(*(month+2))[1]地址 = %p\n",&(*(month+2))[1]);//打印3行2列的字符的地址	 
	printf("march第2个字符&(*(month+2)+1)地址 = %p\n",(*(month+2)+1));
	
	printf("march第2个字符&(month[2]+1)地址 = %p\n",(month[2]+1));
	printf("march第2个字符&month[2][1]地址 = %p\n\n",&month[2][1]);
	return 0; 
}
