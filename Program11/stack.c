#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include "stack.h"

#define STACK_SIZE 100 
// external variables
int contents[STACK_SIZE]; 
int top= 0; 

/*******
* function name: make_empty
* summary: empties the stack
* input: none
* output: none
********
* pseudocode
* begin
*	set top of stack to 0
* end
*******/
void make_empty(void) { 
	//set top of stack to 0
	top= 0; 
} 

/*******
* function name: is_empty
* summary: checks to see if the stack is empty
* input: none
* output: none
********
* pseudocode
* begin
*	returns if the top of the stack is 0
* end
*******/
bool is_empty(void) { 
	//returns if the top of the stack is 0
	return top== 0; 
} 

/*******
* function name: is_full
* summary: checks to see if the stack is full
* input: none
* output: none
********
* pseudocode
* begin
*	returns if the top of the stack is the max size of stack
* end
*******/
bool is_full(void) { 
	//returns if the top of the stack is the max size of stack
	return top== STACK_SIZE; 
} 

/*******
* function name: push
* summary: runs stack_overflow() if stack is full, else sets input to top
* 	of stack
* inputs: integer
* outputs: none
********
* pseudocode
* begin
*	if stack is full
*		call stack_overflow()
*	else
*		set input to top of stack
* end
*******/
void push (int i) { 
	//if stack is full
	if (is_full()) 
		//call stack_overflow()
		stack_overflow(); 
	else 
		//set input to top of stack
		contents[top++] = i; 
}

/*******
* function name: pop
* summary: runs stack_underflow() if stack is empty, else returns what was 
*	at the top of the stack
* inputs: none
* outputs: none
********
* pseudocode
* begin
*	if stack is empty
*		call stack_underflow()
*	else
*		return top of stack
* end
*******/
int pop (void) {
	//if stack is empty
	if (is_empty()) 
		//call stack_underflow()
		stack_underflow(); 
	else 
		//return top of stack
		return contents[--top];
}

/*******
* function name: stack_overflow
* summary: prints a too complex error message and exits the program
* inputs: none
* outputs: none
********
* pseudocode
* begin
*	print error message
*	exit
* end
*******/
void stack_overflow(){
	//print error message
    printf("Expression is too complex\n");
	//exit
    exit(EXIT_FAILURE);
}

/*******
* function name: stack_underflow
* summary: prints a not enough operands error message and exits the program
* inputs: none
* outputs: none
********
* pseudocode
* begin
*	print error message
*	exit
* end
*******/
void stack_underflow(){
	//print error message
    printf("Not enough operands in expression\n");
	//exit
    exit(EXIT_FAILURE);
}

//test