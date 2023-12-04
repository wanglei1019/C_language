#include<stdio.h>

struct point {
	int x;
	int y;
};

struct point *getStruct(struct point *);

void print(const struct point *);

void output(struct point);

int main(int argc,char const *argv[]){
	
	struct point y = {0,0};
	struct point * p = getStruct(&y);

	print(p);
	output(*p);
	
	p->x = 99;
	print(p);
	*p = (struct point){6,6};
	print(p);
	 
	
	return 0;
}

//����ָ��ķ�ʽ ���� 
struct point *getStruct(struct point *p){
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	return p;
}

//����ָ��ķ�ʽ ��� 
void print(const struct point *p){
	printf("%d,%d\n",p->x,p->y);
}

//�����ṹ�ķ�ʽ ��� 
void output(struct point p){
	printf("%d,%d\n",p.x, p.y);
}
