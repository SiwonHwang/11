#include <stdio.h>
#include <stdlib.h>

typedef struct linknd {
	int data;
	
	void *next;
	//struct linked *next; (이렇게 해도 됨)  
} linknd_t; 

static linknd_t *list; //linked List 실체 

linknd_t* create_node(int value) {
	
	linknd_t* ndPtr;
	
	//동적 메모리 할당
	ndPtr = (linknd_t*)malloc( sizeof(linknd_t) );
	if (ndPtr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	}
	
	//정수값 저장 
	ndPtr->data = value;
	ndPtr->next = NULL;
	
	return ndPtr;
}



void addTail(int value){
	linknd_t *ndPtr, *newPtr;
	
	if (list == NULL)
	{
		return;
	}
	else
	{
		ndPtr = list;
		while (ndPtr->next != NULL){
			ndPtr = ndPtr->next;
		}
		
		newPtr = create_node(value);
		ndPtr->next = newPtr;
	}
	
}
