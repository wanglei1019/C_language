#include "anySum.h"


int m = 9;

int anySum(int m,int n){
	int sum = 0;
	int i;
	for(i = (m<n?m:n); i <= (m>n?m:n); i++){
		sum += i;
	}
	return sum;
}
