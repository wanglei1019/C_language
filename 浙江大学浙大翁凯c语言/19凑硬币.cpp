#include<stdio.h>

int main(){
	printf("�������������1��2��5Ӳ�����\n");
	printf("��Ͷ�ң���/����");
	int x;
	int count = 0;
	int exit = 0;
	scanf("%d",&x);
	int one, two, five;
	
	for(one = 1;one <= x*10;one++){
		for(two = 1;two <= x*5;two++){
			for(five = 1;five <= x*2;five++){
				if(one + two*2 + five*5 == x*10){
					printf("%d��һ�� + %d������ + %d����� = %dԪ\n",one, two, five, x);
					count++;
					exit = 1;
					break;
					//goto out;  //goto��� 
				}
			}
			if(exit) break;
		}
		if(exit) break;
	}
//out:printf("only first");
	printf("you have %d selection��is frist",count);
	return 0; 
}
