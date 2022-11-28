/*****************************
* Function name: main
* Summary: finds and prints the largest and smallest 
* 	of five integers entered by the user
* Input: none
* Output: none
******************************
* Pseudocode:
* begin
*	get five integers
*	find largest integer
*	find smallest integer
*	print largest and smallest integers
* end
******************************/


# include <stdio.h>

int main(void)
{
	int int1, int2, int3, int4, int5, big, small;

// get five integers
	printf("Enter five integers in any order: ");
	scanf("%d %d %d %d %d", &int1, &int2, &int3, &int4, &int5);

//find largest integer
	if (int1 > int2)					
		big = int1;
	else
		big = int2;

	if (int3 > big)
		big = int3;
	else
		big = big;

	if (int4 > big)
		big = int4;
	else
		big = big;

	if (int5 > big)
		big = int5;
	else
		big = big;

	
// find smallest integer
	if (int1 < int2)
		small = int1;
	else
		small = int2;

	if (int3 < small)
		small = int3;
	else
		small = small;

	if (int4 < small)
		small = int4;
	else
		small = small;

	if (int5 < small)
		small = int5;
	else
		small = small;

// print largest and smallest integers
	printf("Largest integer: %d\n", big);
	printf("Smallest integer: %d", small);
}
