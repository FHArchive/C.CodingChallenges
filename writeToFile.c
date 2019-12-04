/*
Author Kieran
Date 11/10/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 // Compiler version gcc 6.3.0


 /*
The main method takes a user input and populates a text file called output.txt with integers from 1
to the number inputted by the user
 */
 int main(void)
 {
	 // Declare the input
 	int input;
	// Prompt the user for an integer input
	printf("Input a value greater than 0");
 	scanf("%d", &input);
	// Error detection
 	if (input < 1){
		// Inform the user of an error and terminate the program
 		printf("Input a value greater than 0");
 		exit(1);
 	}
 	// Declare the file pointer
 	FILE *file_pointer;
	// Attempt to open/ create a file called output.txt
 	file_pointer = fopen("output.txt", "w");
	// Error detection
 	if (file_pointer == NULL ){
		// Inform the user of an error and terminate the program
 		printf("Error opening file");
 		exit(2);
 	}
 	// Create a string for the output with a maximum length of 100 characters
 	char output [100];
	// Populate the string
 	for(int i = 1; i <= input; i++){
 		char part[10];
 		sprintf(part, "%d\n", i);
 		strcat(output, part);
 	}
 	// Output the string of numbers to the file
	fprintf(file_pointer, output);
 	// Close the file
 	fclose(file_pointer);

 	return 0;
 }
