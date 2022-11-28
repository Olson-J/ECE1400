/**********************
* function name: main
* summary: prints a 10x10 grid and generates a random 'walk' of the alphabet,
*	restarting at A when it reaches Z and terminating if there is no availible
*	paths left
* inputs: none
* outputs: none
*************************
* pseudocode:
* begin
*	set up board and letters
*	start loop
*		pick direction
*		check if direction is ok
*		if Z change to A
*		change character of board array
*		end if all ways blocked
*	end loop
*	print board
*  end
* ************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DEFAULT '.'

int main(void)
{

	int row, col, direction, full;
	srand((unsigned)time(NULL));
	row = col = full = 0;

	//set up board and letters
	char letters = 'A';
	char board[10][10] = { 'A', 0 };


	//start loop
	while (full == 0)
	{
		// pick direction
		direction = rand() % 4;
		// check if direction is ok
		switch (direction)
		{
		case 0:
		{
			if (row - 1 >= 0 && board[row - 1][col] == 0)
			{
				//if Z change to A
				if (letters == 'Z')
					letters = 64;
				// change character of board array
				board[--row][col] = ++letters;
				break;
			}
		}
		case 1:
		{
			if (col + 1 < 10 && board[row][col + 1] == 0)
			{
				if (letters == 'Z')
					letters = 64;
				board[row][++col] = ++letters;
				break;
			}
		}
		case 2:
		{
			if (row + 1 < 10 && board[row + 1][col] == 0)
			{
				if (letters == 'Z')
					letters = 64;
				board[++row][col] = ++letters;

				break;
			}
		}
		case 3:
		{
			if (col - 1 >= 0 && board[row][col - 1] == 0)
			{
				if (letters == 'Z')
					letters = 64;
				board[row][--col] = ++letters;
				break;
			}
		}
		default:
		{
			if (letters == 'Z')
				letters = 64;
			break;
		}

		}

		// end if all ways are blocked
		if (board[row - 1][col] != 0 && board[row][col + 1] != 0 &&
			board[row + 1][col] != 0 && board[row][col - 1] != 0)
			full = 1;

	}



	//print board
	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			if (board[row][col] == 0)
				board[row][col] = DEFAULT;
			printf("%c ", board[row][col]);
		}
		printf("\n");
	}


}