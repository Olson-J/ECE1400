/**************************************
*	Function name: main
*	Summary: any number from 1-99 is entered, will print out the
*	word-form of the given number
*	Input: none
*	Output: none
****************************************
*	Pseudocode:
*	begin
*		get number
*		split off second digit
*		print statement
*		if num <=10
*			switch statement for 1-10
*		else if num < 20
*			switch statement for 11-19
*		else
*			switch statement for first digit
*			switch statement for second digit
*	end
******************************************/


# include <stdio.h>

int main(void)
{
	int num, d2, test;

	//get number
	printf("Enter a number between 1 and 99: ");
	scanf("%d", &num);

	//split off second digit if greater than 19
	test = (num / 10);
	if (test >= 2)
		d2 = (num % 10);
	else
		d2 = 0;

	// print statement
	printf("The English representation of %d is ", num);

	// if num <=10
	if (num <= 10)
		// switch statement for 1-10
		switch (num) {
			case 1:
				printf("one.");
				break;
			case 2:
				printf("two.");
				break;
			case 3:
				printf("three.");
				break;
			case 4:
				printf("four.");
				break;
			case 5:
				printf("five.");
				break;
			case 6:
				printf("six.");
				break;
			case 7:
				printf("seven.");
				break;
			case 8:
				printf("eight.");
				break;
			case 9:
				printf("nine.");
				break;
			case 10:
				printf("ten.");
				break;
		}
	// else if num < 20
	else if (num < 20)
		// switch statement for 11-19
		switch (num) {
			case 11:
				printf("eleven.");
				break;
			case 12:
				printf("twelve.");
				break;
			case 13:
				printf("thirteen.");
				break;
			case 14:
				printf("fourteen.");
				break;
			case 15:
				printf("fifteen.");
				break;
			case 16:
				printf("sixteen.");
				break;
			case 17:
				printf("seventeen.");
				break;
			case 18:
				printf("eighteen.");
				break;
			case 19:
				printf("nineteen.");
				break;
		}
	// else
	else
		// switch statement for first digit
		switch (num) {
			case 20:
				printf("twenty.");
				break;
			case 21: case 22: case 23: case 24: case 25:
				printf("twenty-");
				break;
			case 26: case 27: case 28: case 29:
				printf("twenty-");
				break;
			case 30:
				printf("thirty.");
				break;
			case 31: case 32: case 33: case 34: case 35:
				printf("thirty-");
				break;
			case 36: case 37: case 38: case 39:
				printf("thirty-");
				break;
			case 40:
				printf("fourty.");
				break;
			case 41: case 42: case 43: case 44: case 45:
				printf("fourty-");
				break;
			case 46: case 47: case 48: case 49:
				printf("fourty-");
				break;
			case 50:
				printf("fifty.");
				break;
			case 51: case 52: case 53: case 54: case 55:
				printf("fifty-");
				break;
			case 56: case 57: case 58: case 59:
				printf("fifty-");
				break;
			case 60:
				printf("sixty.");
				break;
			case 61: case 62: case 63: case 64: case 65:
				printf("sixty-");
				break;
			case 66: case 67: case 68: case 69:
				printf("sixty-");
				break;
			case 70:
				printf("seventy.");
				break;
			case 71: case 72: case 73: case 74: case 75:
				printf("seventy-");
				break;
			case 76: case 77: case 78: case 79:
				printf("seventy-");
				break;
			case 80:
				printf("eighty.");
				break;
			case 81: case 82: case 83: case 84: case 85:
				printf("eighty-");
				break;
			case 86: case 87: case 88: case 89:
				printf("eighty-");
				break;
			case 90:
				printf("ninety.");
				break;
			case 91: case 92: case 93: case 94: case 95:
				printf("ninty-");
				break;
			case 96: case 97: case 98: case 99:
				printf("ninty-");
				break;
		}
		// switch statement for second digit
		switch (d2) {
			case 1:
				printf("one.");
				break;
			case 2:
				printf("two.");
				break;
			case 3:
				printf("three.");
				break;
			case 4:
				printf("four.");
				break;
			case 5:
				printf("five.");
				break;
			case 6:
				printf("six.");
				break;
			case 7:
				printf("seven.");
				break;
			case 8:
				printf("eight.");
				break;
			case 9:
				printf("nine.");
				break;
			case 0:
				break;
			default:
				break;
		}
}