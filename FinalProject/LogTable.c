/**********************************************
function name: main
Summary: Read numbers from an input text
file specified in argv[1] and print
them and the corresonding log10 value to 
the an output file specified in argv[2]

inputs: input and output files
outputs: none
*****************************
Pseudocode:
Begin
	check if argc is 3
	if not, print error message and quit
	open input file for reading
	if unable to open file print error message and quit
	Loop until end-of-file
		If able to read number from file
			find log of number
			add number and log to linked list
		EndIf
	EndLoop
	open output file for writing
	if unable to open file print error message and quit
	print linked list to output file
	close files
End
**********************************************/
#include "myLinkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//code partially from recitation and class examples 
int main(int argc, char *argv[])
{
	//check if argc is 3
	if (argc != 3) {
	//if not, print error message and quit
		printf("ERROR, missing information");
		return 0;
	}
	
	FILE *f;
	int n;
	double result;
	//open input file for reading
	f = fopen(argv[1], "r");
	
	//if unable to open file print error message and quit
	if (!f) {
		printf("Couldn't open file!\n");
		return 0;
	}
	
	Node *head = NULL;
	
	//Loop until end-of-file
	while (!feof(f))
	{
		//if able to read number from file
		if (fscanf(f, "%d", &n) == 1)
		{
			//find log of number
			result = log10(n);
			//add number and log to linked list
			add_node(&head, n, result);
		}
	}
	
	FILE *p;
	
	//open output file for writing
	p = fopen(argv[2], "w");
	
	//if unable to open file print error message and quit
	if (!p) {
		printf("Couldn't open file!\n");
		return 0;
	}
	
	//print linked list to output file
	while (head != NULL) {
		fprintf(p, "%d\t%.4f\n", head->data, head->result);
		head = head->next;
	}
	
	//close files
	fclose(p);
	fclose(f);
	return 0;
}