#include<stdio.h>

int main(){
	const char* month[] = {//ָ�����飬ָ������鼯�� 
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
	
	//���ַ�����ӡĳ�еĵ�ַ 
	printf("month�ĵ�ַ = %p\n",month);
	printf("month+1�ĵ�ַ = %p\n",month+1);//ָ������ĵڶ���ָ��ȡ��ַ 
	
	printf("&month[0]�ĵ�ַ = %p\n",&month[0]);
	printf("&month[1�ĵ�ַ] = %p\n\n",&month[1]); 
	
	
	//���ַ�����ӡĳ�е�ֵ 
	printf("*month = %s\n",*month);
	printf("*(month+1)= %s\n",*(month+1));//ָ������ĵڶ���ָ��ȡֵ 
	
	printf("month[0] = %s\n",month[0]);
	printf("month[1]= %s\n\n",month[1]);//ָ������ĵڶ���ָ��ȡֵ ,ȡ�ڶ��� 
	;
	
	//���ַ�����ӡĳ��ĳ�е��ַ���ֵ 
	printf("march��2���ַ�(*(month+2))[1] = %c\n",(*(month+2))[1]);//����(�ַ���)ָ�� ��ָ�����飨�ַ�������ָ��
	printf("march��3���ַ�(*(month+2))[2] = %c\n",(*(month+2))[2]); 
	
	printf("march��2���ַ�*(*(month+2)+1) = %c\n",*(*(month+2)+1));
	printf("march��3���ַ�*(*(month+2)+2) = %c\n",*(*(month+2)+2));
	
	printf("march��2���ַ�*(month[2]+1) = %c\n",*(month[2]+1));
	printf("march��3���ַ�*(month[2]+2) = %c\n",*(month[2]+2));
	
	printf("march��2���ַ�month[2][2] = %c\n",month[2][1]);
	printf("march��3���ַ�month[2][2] = %c\n\n",month[2][2]);
	
	
	//���ַ�����ӡĳ��ĳ�е��ַ���ֵ��ַ 
	printf("march��2���ַ�(*(month+2))[1]��ַ = %p\n",&(*(month+2))[1]);//��ӡ3��2�е��ַ��ĵ�ַ	 
	printf("march��2���ַ�&(*(month+2)+1)��ַ = %p\n",(*(month+2)+1));
	
	printf("march��2���ַ�&(month[2]+1)��ַ = %p\n",(month[2]+1));
	printf("march��2���ַ�&month[2][1]��ַ = %p\n\n",&month[2][1]);
	return 0; 
}
