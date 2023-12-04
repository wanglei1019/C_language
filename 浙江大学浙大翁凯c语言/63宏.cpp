#include<stdio.h>

#define PI 3.1415926
#define FORMAT1 "PI2*1.0 = %f\n"
#define FORMAT2 "PI2*2.0 = %f\n"
#define PI2 2*PI					//2*3.1415926
#define PRT printf(FORMAT1,PI2*1.0); \
			printf(FORMAT2,PI2*2.0)

// const double  PI = 3.1415926

 
 
int main(int argc,char const *argv[]){	
	PRT;
	return 0;
}
