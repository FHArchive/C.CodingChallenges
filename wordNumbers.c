/*
	Date 08/10/2018
	Author FredHappyface
*/
#include <stdio.h>
#include <string.h>
 //Compiler version gcc 6.3.0
 
//Declare int_to_string function 
 void int_to_string(int input);

/*
	The main method is used to test the int_to_string
	function with the value 10, the output should be "one zero"
*/
 int main(void)
 {
 	int_to_string(10);
 	return 0;
 }

/*
	Method int_to_string
	Inputs integer: input
	Outputs none 
	This function takes an integer input and returns the word version 
	of it (e.g. 37 would be "three seven")
*/
 void int_to_string(int input){
 	// Initialise variables 
 	char output [100];
 	char int_as_string[100];
 	// Convert input to a string and store it in int_as_string
 	sprintf(int_as_string, "%d", input);
 	// For each int append the word form to the output
 	for(int index=0; index < strlen(int_as_string); index ++){
 		char int_part = int_as_string[index];
 		switch(int_part){
 			case('0'):{
 			strcat(output, "zero ");
 			break;	
 			}
 			case('1'):{
 			strcat(output, "one ");
 			break;	
 			}
 			case('2'):{
 			strcat(output, "two ");
 			break;	
 			}
 			case('3'):{
 			strcat(output, "three ");
 			break;	
 			}
 			case('4'):{
 			strcat(output, "four ");
 			break;	
 			}
 			case('5'):{
 			strcat(output, "five ");
 			break;	
 			}
 			case('6'):{
 			strcat(output, "six ");
 			break;	
 			}
 			case('7'):{
 			strcat(output, "seven ");
 			break;	
 			}
 			case('8'):{
 			strcat(output, "eight ");
 			break;	
 			}
 			case('9'):{
 			strcat(output, "nine ");
 			break;	
 			}
 		}
 		
 	}
 	// Print the output
 	printf("%s", output);
 	return;
 	
 }
