#include<stdio.h>

int main(){
	int x,newx = 0; 
	scanf("%d",&x);
	
	int oldx =  x;
	int digit = 0;

	while(x != 0){
		digit  = x%10;
		x /= 10;
		newx = newx*10 + digit;//
	}
	printf("%d���������ΪΪ%d",oldx,newx); 
	return 0; 
}
