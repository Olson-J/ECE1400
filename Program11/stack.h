#ifndef STACK_H
#define STACK_H

//checks to see if there is anything on the stack
bool is_empty(void);

//checks to see if the stack is full
bool is_full(void);

// adds i to the stack unless it is full
void push(int i);

// returns and removes the top value of the stack unless it is empty
int pop(void);

// prints the 'too complicated' error and quits the program
void stack_overflow();

// prints the 'not enough operands' error and quits the program
void stack_underflow();

#endif

//test