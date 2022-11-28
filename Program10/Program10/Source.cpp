// atoi will take the number (string) passed when f is called and make int
// strcpy compares strings to find largest and smallest

/***********************
* function name: main
* summary: passes in the number of words to be evaluated, then identifies
*	which words come first and last alphabetically
* inputs: number of words to be evaluated
* outputs: none
* ***********************
* pseudocode
* begin
*	convert the number of words from a string to an int
*	for loop
*		ask for word
*		get word
*		compare strings
*		save smallest and largest
*	end loop
*	print smallest and largest
* end
**************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int i;

	int num = atoi(argv[1]);
	char words[6][30], small[30] = "zz", big[30] = "aa";

	//replace num with atoi(argv[1])

	for (i = 0; i < num; i++) {
		printf("Enter a word: ");
		scanf_s("%29s", *words, 30);
		//is words[i] < small
		if (strcmp(words[i], &small[i]) < 0) {
			//dont think this is legal but its concept
			strncpy(&small[i], words[i], sizeof(small[i]));
		}
		// else if words[i] > big
		else if (strcmp(&big[i], words[i])) {
			strncpy(&big[i], words[i], sizeof(big[i]));
		}
	}
	//set small to zz and big to aa, check ok how done

	for (i = 1; i < strlen(&small[i]); i++) 
	{
		printf("Smallest word: %s\n", &small[i]);
	}

	for (i = 1; i < num; i++) 
	{
		printf("Biggest word: %s\n", &big[i]);
	}

}