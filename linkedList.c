
typedef struct linknd {
	int data;
	
	void *next;
	//struct linked *next; (이렇게 해도 됨)  
} linknd_t; 

static linknd_t *list; //linked List 실체 
