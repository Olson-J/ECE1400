/******************************
* function name: number_grid.c
* summary: asks user to input all digits 1-16, then prints the digits in a 4x4 
* square. Then calculates and prints the sums of the rows, columns and diagonals.
* input: 16 integers
* output: formatted digits, column/row/diagonal sums
* 
* *****************************
* Pseudocode:
* Begin
*	assign rows and columns to digits
*	ask for user to input digits
*	aquire digits
*	print digits in pattern
*	find sum of rows
*	find sum of columns
*	find sum of diagonals
*	print sums
* end
**********************************/

# include <stdio.h>
int main(void)
{
	// assign rows and colums to digits
	int a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4;
	int sumR1, sumR2, sumR3, sumR4, sumC1, sumC2, sumC3, sumC4, sumLDiag, sumRDiag;

	// ask for user to input digits
	printf("Enter all digits from 1 to 16, in any order: ");

	// aquire digits
	scanf_s("%d %d %d %d", &a1, &a2, &a3, &a4);
	scanf_s("%d %d %d %d", &b1, &b2, &b3, &b4);
	scanf_s("%d %d %d %d", &c1, &c2, &c3, &c4); 
	scanf_s("%d %d %d %d", &d1, &d2, &d3, &d4);

	// print digits in pattern
	printf("%d\t %d\t %d\t %d\t\n", a1, a2, a3, a4);
	printf("%d\t %d\t %d\t %d\t\n", b1, b2, b3, b4);
	printf("%d\t %d\t %d\t %d\t\n", c1, c2, c3, c4);
	printf("%d\t %d\t %d\t %d\t\n", d1, d2, d3, d4);

	// find sum of rows
	sumR1 = a1 + a2 + a3 + a4;
	sumR2 = b1 + b2 + b3 + b4;
	sumR3 = c1 + c2 + c3 + c4;
	sumR4 = d1 + d2 + d3 + d4;

	// find sum of columns
	sumC1 = a1 + b1 + c1 + d1;
	sumC2 = a2 + b2 + c2 + d2;
	sumC3 = a3 + b3 + c3 + c3;
	sumC4 = a4 + b4 + c4 + d4;

	//find sum of diagonals
	sumLDiag = a1 + b2 + c3 + d4;
	sumRDiag = a4 + b3 + c2 + d1;

	// print sums
	printf("Row sums: %d %d %d %d\n", sumR1, sumR2, sumR3, sumR4);
	printf("Column sums: %d %d %d %d\n", sumC1, sumC2, sumC3, sumC4);
	printf("Diagonal sums: %d %d\n", sumLDiag, sumRDiag);

	return 0;
}