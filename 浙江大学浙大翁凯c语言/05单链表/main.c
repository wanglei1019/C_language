#include <stdio.h>
#include <stdlib.h>
#include "node.h" 
/*
*	@单链表-不带头节点 
*/

int main(int argc, char *argv[]) {
	List list;
	list.head = NULL;
	int number;
	
	do{
		scanf("%d",&number);
		if( number != -1){
			add(&list,number);
		}	
	}while( number != -1);
	
	print(&list);
	
	
	printf("deleteNode(&list,1) = %d\n",deleteNode(&list,1));
	printf("deleteNode(&list,4) = %d\n",deleteNode(&list,4));
	
	print(&list);
	
	freeNode(&list);

	print(&list);
	
	return 0;
}

//add节点 
void add(List *pList,int number){
	//add to linked-list
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	
	// find the last node
	Node *last = pList->head;
	if( last ){
		while( last->next ){
			last = last->next;
		}
		//attach
		last->next = p;
	}else{
		pList->head = p;
	}
}

//print链表
void print(List *pList){
	Node *p;
	for(p=pList->head;p;p=p->next){
		printf("%d\t",p->value);
	}
	printf("\n");
}

//deleteNode 删除节点 ，传入值，返回节点的值 
int deleteNode(List *list,int e){
	Node *p,*q;
	int i = 0;
	for (q=NULL,p=list->head; p; q=p,p=p->next){
		if( p->value == e){
			if( q ){
				q->next = p->next;	
			}
			else{
				list->head = p->next;
			}
			i = p->value;
			free(p);
			break;
		}
	}
	return i;
}

//free链表
void freeNode(List *list){
	Node *p,*q;
	for(p=list->head; p; p=q){
		q = p->next;
		free(p);
	}
	list->head = NULL;
	
}
