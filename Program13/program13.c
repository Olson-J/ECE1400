/****************************************
* function name: main
* summary: gets words from the user and prints them after sorting them
* inputs: number of words
* outputs: none
*****************************************
* pseudocode
* begin
*	make arrays
*	start loop
*		get word from user
*		store in array
*		store in array of pointers
*	end loop
*	sort array
*	start loop
*		print  sorted array
*	end loop
* end
*****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
	
	int num_words = atoi(argv[1]), j, i;
	
	//make arrays
	char input[16];
	char *words[num_words], *temp;
	
	for (i = 0; i < num_words; i++) {
		//get word from user
		printf("Enter a string: ");
		//store in array
		scanf("%s", input);
		
		//store in array of pointers
		words[i] = (char*)malloc(strlen(input)+1);
		if (words[i] == NULL){
			printf("Uh oh\n");
			exit(1);
		}
		strcpy(words[i], input);
	}
	
	//sort array
	for (j = 0; j < num_words -1; j++){
		for (i = 0; i < num_words - 1; i++) {
			if (strcmp(words[i], words[i+1]) > 0) {
				temp = words[i];
				words[i] = words[i+1];
				words[i+1] = temp;
			}
		}
	}
	
	//print sorted array
	printf("\nSorted words: ");
	for (i = 0; i < num_words; i++) {
		printf("%s ", words[i]);
	}
	
	return 0;
	
	
	
	
}