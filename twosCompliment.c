/*
Date 08/10/2018
Author FredHappyface
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
//Compiler version gcc 6.3.0

/*
Declare the twos_compliment and the binstr_to_int
functions
*/
int twos_compliment(char input[]);
int binstr_to_int(char input[], int offset_left);

/*
The main method tests the binstr_to_int function
and the twos_compliment function
*/
 int main(void)
 {
 	printf("The binary 10 as an integer is %d\n", binstr_to_int("10",0));
 	printf("The two's compliment of 1001 is %d\n", twos_compliment("1001"));
 	printf("The two's compliment of 0001 is %d\n", twos_compliment("0001"));
 	return 0;
 }

/*
Method twos_compliment
Inputs string: input
Outputs int: output
This method takes a string representing a binary value
and returns an integer representation of the two's compliment
*/
int twos_compliment(char input[]){
	// Find the value of the most significant bit
	int sign_val = pow(2, strlen(input) - 1);
	// Produce the ones compliment
	char sone_compliment[] = "";
	for(int index = 0; index < strlen(input); index ++ ){
		if (input[index] == '1'){
			strcat(sone_compliment, "0");
		}
		else{
			strcat(sone_compliment, "1");
		}
	}
	// Convert the one's compliment to an integer
	int one_compliment = 0;
	if(sone_compliment[0] - '0' == 0){
		one_compliment = binstr_to_int(sone_compliment, 0);
	}
	else{
		one_compliment = binstr_to_int(sone_compliment, 1);
		one_compliment -= sign_val;

	}
	// Convert to two's compliment and return value
	int output = one_compliment + 1;
	return output;
}

/*
Method binstr_to_int
Inputs string: input, integer: offset_left
Outputs integer: output
This function takes a string representation of a binary value
an offset (this identifies the number of bits on the left to be
ignored) and returns an integer
*/
int binstr_to_int(char input[], int offset_left){
	// Initialise variables
	int output = 0;
	int j = 0;
	for(int i = strlen(input) -1; i >= offset_left; i--, j++){
		// Increment output by the value of the character shifted by its position
		output += (input [i] - '0') << j;
	}
	return output;
}
