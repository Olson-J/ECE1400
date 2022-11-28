#include "myLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

/***********
function name: create
summary: creates a new node containing 
an integer and a double
inputs: int and double
outputs: new node
************
pseudocode
begin
	allocate memory for new node
	input the int into the new node
	input the double into the new node
	return the new node
end
********/
//partially from recitation and the textbook
Node* create(int data, double result){
	//allocate memory for new node
	Node *n_node = malloc(sizeof(Node));
	//	input the int into the new node
	n_node->data = data;
	//	input the double into the new node
	n_node->result = result;
	//return the new node
	return n_node;
}


/**************
function name: add_node
summary: sorts through the linked list to find the correct
spot for the new node and check for repeats, then adds the 
node to the list
inputs: ** to list, int, double
outputs: none
****************
pseudocode
begin
	if list is empty, add a new node
	make a new node containing the int and double
	sort through the list to find where node should go
	check for duplicates
	if prev == NULL add node to the beginning of the list
	else put node into its sorted spot 
end
**************/

// code partially from recitation and the textbook
void add_node (Node** head, int data, double result) {
	
	//if list is empty, add a new node
	Node *head_ref = *head;
	if (*head == NULL){
		*head = create(data, result);
		return;
	}
	
	//make a new node containing the int and double
	Node *n_node = create(data, result);
	
	Node *cur = *head;
	Node *prev;

	//sort through the list to find where node should go
	for (cur = *head, prev = NULL; cur != NULL && n_node->data > cur->data;
		prev = cur, cur = cur->next)
		;
		
	//check for duplicates
	if (cur != NULL && n_node->data == cur->data) {
		free(n_node);
		return;
	}
	
	n_node->next = cur;
	
	//if prev == NULL add node to the beginning of the list
	if (prev == NULL) {
		*head = n_node;
	}
	else {
		//else put node into its sorted spot 
		prev->next = n_node;
	}
}
