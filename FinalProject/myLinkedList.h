#ifndef LINKEDLIST
#define LINKEDLIST

//data types
typedef struct node {
	int data;
	double result;
	struct node *next;
} Node;

//constructors
Node* create(int data, double result);
void add_node (Node** head, int data, double result);

#endif