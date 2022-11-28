/*****************************
* name: EAN.c
* summary: computes the check number of an EAN
* input: 869148426000
* output: 8
* 
* Pseudocode:
* begin
*	get the first 12 digits
*	calculate the checksum
*	print checksum to screen
* end
**********************************/

# include <stdio.h>

int main(void)
{
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, sum1, sum2, check;

	//get first 12 digits
	printf("Enter first 12 numbers: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8,
		&d9, &d10, &d11, &d12);

	//calculate the checksum
	sum1 = d2 + d4 + d6 + d8 + d10 + d12;
	sum2 = d1 + d3 + d5 + d7 + d9 + d11;
	sum2 += (sum1 * 3);
	check = sum2 - 1;
	check = check % 10;
	check = 9 - check;

	//print checksum to screen
	printf("The check digit is: %1d", check);

	return 0;
}
