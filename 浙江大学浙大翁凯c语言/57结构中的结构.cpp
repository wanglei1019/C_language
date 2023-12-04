#include<stdio.h>

struct point {
	int x;
	int y;
};
struct line {
	struct point ptOne;
	struct point ptTwo;
};


int main(int argc,char const *argv[]){	
	struct line l = {
		{1,2},
		{3,4}
	};
	struct line *lp;
	printf("l.ptOne.x = %i\n",l.ptOne.x); //(l.ptOne).x
	printf("&lp->ptOne.x = %i",&lp->ptOne.x); //&((lp->ptOne).x)
	
	return 0;
}
