#ifndef __TTUDENTS_H__
#define __STUDENTS_H__


#define STR_LEN 20	
/**	const int STR_LEN1 = 20; 
	1.报错Error： variably modified 'name' at file scope 
	2.在C语言中，当我们定义一个全局变量（包括静态变量static和常量const，以及普通变量）时，
	它的内存空间会在程序 启动时 自动分配，因此编译器需要确定这个变量的大小。
	3.在编译时，由于name数组的大小STR_LEN的值不知道（不是一个编译时常量），因此编译器无法确定这个变量的大小，故报编译错误 
	4.预处理指令#define来定义一个编译时常量，可以解决问题
	5.编译时常量-->值在编译时确定 
	6.全局变量（包括静态变量static和常量const，以及普通变量）-->值在运行时确定 
*/
void read(FILE *fp,int index);

typedef struct _student{
	char name[STR_LEN];
	int gender;
	int age;
} Student;



#endif
