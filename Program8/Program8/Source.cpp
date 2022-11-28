/****************************
* function name: main
* summary: asks for amount of money, then prints the smallest number of
*	$20, $10, $5, $2, and $1 bills needed to pay the amount
* inputs: none
* outputs: none
* ****************************
* pseudocode:
* begin
*	ask user for total
*	use pay_amount function to find number of bills needed
*	print number of bills needed
* end
******************************/
#include <stdio.h>
void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* twos, int* ones);

int main(void) {
	int dollars, twenties, tens, fives, twos, ones;

	// ask user for total
	printf("Enter an amount to be broken into bills: $");
	scanf_s("%d", &dollars);

	// use pay_amount function to find number of bills needed
	pay_amount(dollars, &twenties, &tens, &fives, &twos, &ones);

	// print number of bills needed
	printf("The following numbers of the specified bills are required: \n");
	printf("$20: %d\n", twenties);
	printf("$10: %d\n", tens);
	printf("$5: %d\n", fives);
	printf("$2: %d\n", twos);
	printf("$1: %d\n", ones);

}


/********************
* function name: pay_amount
* summary: determines the smallest number of
*	$20, $10, $5, $2, and $1 bills needed to pay the amount specified by user
* input: none
* output: none
* *******************
* pseudocode:
* begin
*	if total >= 20
*		begin for loop
*			subtract 20 from total as many times as possible
*			*twenties = # of times 20 was subtracted
*		end for loop
*	else
*		*twenties = 0
*	repeat the same if/else format with *tens
*	repeat the same if/else format with *fives
* 	repeat the same if/else format with *twos
* 	repeat the same if/else format with *ones
* end
************************/

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *twos, int *ones) {
	
	// if total >= 20
	if (dollars >= 20) {
		// begin for loop
		for (int i = 0; dollars >= 20;) {
			// subtract 20 from total as many times as possible
			dollars -= 20;
			i++;
			// *twenties = # of times 20 was subtracted
			*twenties = i;
		}
	}
	// else
	else
		// *twenties = 0
		*twenties = 0;
	
	// repeat the same if/else format with *tens
	if (dollars >= 10) {
		for (int i = 0; dollars >= 10;) {
			dollars -= 10;
			i++;
			*tens = i;
		}
	}
	else
		*tens = 0;
	
	// repeat the same if/else format with *fives
	if (dollars >= 5) {
		for (int i = 0; dollars >= 5;) {
			dollars -= 5; i++;
			*fives = i;
		}
	}
	else
		*fives = 0;

	// repeat the same if/else format with *twos
	if (dollars >= 2) {
		for (int i = 0; dollars >= 2;) {
			dollars -= 2;
			i++;
			*twos = i;
		}
	}
	else
		*twos = 0;
	
	// repeat the same if/else format with *ones
	if (dollars >= 1) {
		for (int i = 0; dollars >= 1;) {
			dollars -= 1;
			i++;
			*ones = i;
		}
	}
	else
		*ones = 0;
}