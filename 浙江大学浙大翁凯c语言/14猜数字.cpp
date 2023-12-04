#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main(){
	printf("系统已经产生一个随机数，请你猜吧！\n");
	srand(time(0));
	int r = rand()%100+1;
	printf("%d\n",r);
	int x;
	int n = 1;
	scanf("%d",&x);
	while(x != r){
		if(x > r){
			printf("猜大了请继续\n");
			scanf("%d",&x);
			n++;
		}else{
			printf("猜小了请继续\n");
			scanf("%d",&x);
			n++;
		}
	}
	printf("恭喜你猜对了！共用了%d次\n",n);
	return 0; 
}
