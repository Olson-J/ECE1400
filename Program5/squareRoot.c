/***********************************
* Function name: main
* summary: asks user for number, then calculates its square root
* input: none
* output: none
************************************
* pseudocode
* begin
*	get number from user (x)
*	start loop
*		divide x by y (z)
*		find average of y and z (ave)
*		find product of 0.00001 and y (check)
*		if check > the absolute value of y - ave
*			break
*		else
*			set y = to ave
*	end loop
*	print results
* end
* ********************************/


#include <stdio.h>
#include <math.h>

int main(void) {
	double x, y, z, ave, check, abs;
	y = 1;

	//get number from user (x)
	printf("Enter a positive number: ");
	scanf("%lf", &x);

	//start loop
	do {
		//divide x by y (z)
		z = x / y;
		//find average of y and z(ave)
		ave = (y + z) / 2;
		//find product of 0.00001 and y (check)
		check = y * 0.00001;
		//if check > the absolute value of y - ave
		abs = (double)fabs(y - ave);
		if (check > abs)
			//break
			break;
		//else
		else
			//set y = to ave
			y = ave;
	//end loop
	} while (check < abs);

	//print results
	printf("Square root: %.5f", ave);
}