/***********************************
* Function name: main
* summary: asks user for number, then calculates pi using
* (number) terms of an infinite series
* input: none
* output: none
************************************
* Pseudocode
* begin
*	get number
*	for (n) times
*		find if n is even or odd
*		find numerator
*		find denominator
*		calculate sum
*	print sum
* end
***********************************/

#include <stdio.h>

int main(void)
{
	float n, sum, num, denom, x;
	int i;
	//get number
	printf("Enter an integer n. The value of pi will be calculated using n ");
	printf("terms of an infinite series. \nn: ");
	scanf("%f", &n);

	sum = 0;

	//for (n) times
	for (x = 1; x <= n; x++) {
		//find if n is even or odd
		i = x;
		num = (i % 2);

		//find numerator
		if (i == 1)
			num = 4;
		else if (num == 0)
			num = -4;
		else
			num = 4;

		//find denominator
		denom = (2 * x) - 1;

		//calculate sum
		sum += (num / denom);
	}

	//print sum
	printf("The approximation of pi using %.0f terms is %f", n, sum);
}
