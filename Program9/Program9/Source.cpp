/**********
* function name: main
* summary: ask user for a word/phrase, takes out any non-letter characters and
*	makes all letters uppercase, then checks and prints if the word/phrase is
*	a palindrome
* inputs: none
* outputs: none
* ****************************
* pseudocode:
* begin
*	ask user for word/phrase
*	 begin for loop to check each character
*		check to make sure getchar got an actual character and not a newline
*		make sure character is in the upper or lower case alphabet
*		if lowercase make uppercase
*	end for loop
*	begin while (not at the middle of the word/phrase)
*		check to see if end characters are the same
*		if they dont match stop and print not a palindrome
*		else continue to check next ones 
*	end while loop
*	if all characters match to their counterparts, print its a palindrome
* end
* *********************/

#include <stdio.h>
#include <ctype.h>

int main(void) {
	char a[200], * p, * q, ch;
	int i, j, check, len;
	q = 0;

	//ask user for word/phrase
	printf("Enter a word/phrase: ");

	//begin for loop to check each character
	for (p = a; p < a + 200;) {
		ch = getchar();
		//check to make sure getchar got an actual character and not a newline
		if (ch == '\n') {
			break;
		}
		//make sure character is in the upper or lower case alphabet
		if (ch >= 65) {
			if (ch >= 97) {
				//if lowercase make uppercase
				if (ch <= 122) {
					ch = toupper(ch);
					*p = ch;
					p++;
					
					
				}
			}
			//else continue to check next ones
			else if (ch <= 90) {
				*p = ch;
				p++;
			}
		}
	}

	p--;
	q = a;
	check = 1;
	//begin while (not at the middle of the word/phrase)
	while (p != q) {
		//check to see if end characters are the same
		//if they dont match stop and print not a palindrome
		if (*p != *q) {
			printf("This word/phrase is not a palindrome");
			check = 1;
			break;
		}
		else {
			check = 0;
			q++;
			p--;
		}
	}

	//if all characters match to their counterparts, print its a palindrome
	if (check == 0)
		printf("This word/phrase is a palindrome");
	
}