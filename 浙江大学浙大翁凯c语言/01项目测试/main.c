#include <stdio.h>
#include <stdlib.h>
#include "anySum.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int n = 5;
	int sum;
	//scanf("%d%d",&m,&n);
	sum = anySum(n,m);
	printf("%d到%d的前n项和为%d",m<n?m:n,m>n?m:n,sum);
	return 0;
}
