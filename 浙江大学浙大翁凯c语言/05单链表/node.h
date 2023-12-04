#ifndef _NODE_H_
#define _NODE_H_


typedef struct _node{
	int value;
	struct _node *next;
} Node;

typedef struct _list{
	Node * head;
	Node * tail; 
} List;

void add(List *pList,int number); 
void print(List *pList);
int deleteNode(List *list,int e);
void freeNode(List *list);
#endif

/**
*	@@add����������д�� 


//add�ڵ�
void add(Node * head,int number){
	//add to linked-list
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	// find the last node
	Node *last = head;
	if( last ){
		while( last->next ){
			last = last->next;
		}
		//attach
		last->next = p;
	}else{
		head = p;
	}
}

//add�ڵ� 
Node * add(Node * head,int number){
	//add to linked-list
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	// find the last node
	Node *last = head;
	if( last ){
		while( last->next ){
			last = last->next;
		}
		//attach
		last->next = p;
	}else{
		head = p;
	}
	return head;
}

//add�ڵ� 
void add(Node **pHead,int number){
	//add to linked-list
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	// find the last node
	Node *last = *pHead;
	if( last ){
		while( last->next ){
			last = last->next;
		}
		//attach
		last->next = p;
	}else{
		*pHead = p;
	}
}

*/ 
