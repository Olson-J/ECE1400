

/***********************************
* function name: main
* summary: asks user for value of x, calls math() to
*	to find the value of a polynomial, then prints it
* inputs: none
* outputs: none
****************************
* pseudocode
* begin
*	print summary/explanation
*	print polynomial
*	ask user for value of x
*	get value of x
*	print solution of polynomial
* end
*************************************/

#include <stdio.h>
double math(double x);

int main(void) {
	double x;

	// print summary/explanation
	printf("This program calculates the following polynomial: \n");
	//print polynomial
	printf("2x^5 + 3x^4 - x^3 - 5x^2 + 6x -7\n");
	// ask user for value of x
	printf("Please enter a value for x: ");
	// get value of x
	scanf_s("%lf", &x);

	//print solution of polynomial
	printf("Result: %.8lf", math(x));
}

/********************
* function name: math
* Summary: take the value of x and use it to find and return the
*	solution of a polynomial
* Inputs: value of x
* Outputs: polynomial solution
* ********************************
* Pseudocode:
* begin
*	find x^2, x^3, x^4, and x^5
*	muliply x^5 by 2
*	multiply x^4 by 3
*	multiply x^2 by 5
*	multiply x by 6
*	add (2x^5 + 3x^4) to sum
*	subtract x^3 from sum
*	subtract 5x^2 from sum
*	add 6x to sum
*	subtract 7 from sum
*	return sum
* end
* *********************************/

double math(double x) {
	double sum, x5, x4, x3, x2;
	//find x^2, x^3, x^4, and x^5
	x2 = x * x;
	x3 = x2 * x;
	x4 = x3 * x;
	x5 = x4 * x;

	//muliply x^5 by 2
	x5 *= 2;
	//multiply x^4 by 3
	x4 *= 3;
	//multiply x^2 by 5
	x2 *= 5;
	//multiply x by 6
	x *= 6;

	//add (2x^5 + 3x^4) to sum
	sum = x5 + x4;
	//subtract x^3 from sum
	sum -= x3;
	//subtract 5x^2 from sum
	sum -= x2;
	//add 6x to sum
	sum += x;
	//subtract 7 from sum
	sum -= 7;
	//return sum
	return(sum);
}