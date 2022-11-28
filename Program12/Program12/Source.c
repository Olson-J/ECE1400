/******************
* function name: main
* summary: gets a state abbreviation from user, checks to see if it matches
*	a state abbreviation, and prints the results
* inputs: none
* outputs: none
* *****************
* pseudocode
* begin
*	make structure tag for state abbreviations
*	make an array of structures with 50 states info
*	get user input
*	begin for loop
*		if user input matches a state abbreviation
*			print what state it matches
*	end for loop
*	if check == 0 
*		print no matches message
*	
* end
***********************/
#include <stdio.h>
#include <string.h>

int main(void) {
	//make structure tag for state abbreviations
	struct state_abrv {
		const char* state;
		const char* abrv;
	};

	//make an array of structures with 50 states info
	const struct state_abrv country_abrv[] = 
	  { {"Alabama",			"AL"}, {"Alaska",			"AK"}, 
		{"Arizona",			"AZ"}, {"Arkansas",			"AR"},
		{"California",		"CA"}, {"Colorado",			"CO"}, 
		{"Connecticut",		"CT"}, {"Delaware",			"DE"}, 
		{"Florida",			"FL"}, {"Georgia",			"GA"},
		{"Hawaii",			"HI"}, {"Idaho",			"ID"}, 
		{"Illinois",		"IL"}, {"Indiana",			"IN"}, 
		{"Iowa",			"IA"}, {"Kansas",			"KS"}, 
		{"Kentucky",		"KY"}, {"Louisiana",		"LA"}, 
		{"Maine",			"ME"}, {"Maryland",			"MD"},
		{"Massachusetts",	"MA"}, {"Michigan",			"MI"}, 
		{"Minnesota",		"MN"}, {"Mississippi",		"MS"}, 
		{"Missouri",		"MO"}, {"Montana",			"MT"}, 
		{"Nebraska",		"NE"}, {"Nevada",			"NV"}, 
		{"New Hampshire",	"NH"}, {"New Jersey",		"NJ"}, 
		{"New Mexico",		"NM"}, {"New York",			"NY"}, 
		{"North Carolina",	"NC"}, {"North Dakota",		"ND"}, 
		{"Ohio",			"OH"}, {"Oklahoma",			"OK"}, 
		{"Oregon",			"OR"}, {"Pennslyvania",		"PA"}, 
		{"Rhode Island",	"RI"}, {"South Carolina",	"SC"}, 
		{"South Dakota",	"SD"}, {"Tenessee",			"TN"}, 
		{"Texas",			"TX"}, {"Utah",				"UT"}, 
		{"Vermont",			"VT"}, {"Virginia",			"VA"},
		{"Washington",		"WA"}, {"West Virgina",		"WV"}, 
		{"Wisconsin",		"WI"}, {"Wyoming",			"WY"} };

	int i, check = 0;
	char abrv[3];

	//get user input
	printf("Enter a 2-letter U.S. state abbreviation: ");
	fgets(abrv, 3, stdin);
	
	for (i = 0; i < 50; i++) {

		//if user input matches a state abbreviation
		if ((strcmp(country_abrv[i].abrv, abrv)) == 0) {
			//print what state it matches
			printf(abrv);
			printf(" is an abbreviation for ");
			printf(country_abrv[i].state);
			check = 1;
			break;
		}
	}

	//if check == 0 
	if (check == 0) {
		//print no matches message
		printf(abrv);
		printf(" is not an abbreviation of any of the 50 U.S. states.");
	}
	
		
}