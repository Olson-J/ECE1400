/****************
* fuction name: main
* summary: asks user for expression, then calls 
* solve() and prints the value of the expression
* input: none
* output: none
******************
* pseudocode:
* begin 
*	begin for loop (will repeat until there is a problem with expression)
*		ask for expression
*		call solve()
*		print value
*	end loop
* end
*******************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <ctype.h>
#include "stack.h"

void solve(void);

int main(void){
	//begin for loop (will repeat until there is a problem with expression)
	for (;;){
		//ask for expression
		printf("Enter an RPN expression: ");
		//call solve()
		solve();
		//print value
		printf("Value of expression: %d\n", pop());
		
	}
	return 0;
}

/******************
* function name: solve
* summary: takes characters from the expression entered in main
* 	and uses them to complete the math needed to find the value
*	of the whole expression
* input: none
* output: none
*******************
*pseudocode
* begin
*	begin while loop
* 		get character
*		check if ch is newline
*		check if ch is a number
*		begin switch statement to check if ch is an operator
*			if operator get operands
*			push result of operation
*			break while loop once ch is =
*		end switch statement
*	end while loop
* end
********************/
void solve(void){
	char ch;
	int operand, operand2;
	bool run = true;
	while(run){
		//get character
		scanf(" %c", &ch);
		
		//check if ch is newline
		if (ch == '\n')
			break;
		
		//check if ch is a number
		if (isdigit(ch)) {
			push(ch - '0');
			
		}
		else {
			switch(ch) {
				case ' ': break;
				case '-':
					//if operator get operands
					operand2 = pop();
					operand = pop();
					//push result of operation
					push(operand - operand2);
					
					break;
				case '/':
					operand2 = pop();
					operand = pop();
					push(operand / operand2);
					break;
				case '+':
					operand2 = pop();
					operand = pop();
					push(operand + operand2);
					break;
				case '*':
					operand2 = pop();
					operand = pop();
					push(operand * operand2);
					break;
				case '=':
					//break while loop once ch is =
					run = false;
					break;
				default:
					break;
			}
		}
	}
}


//test