/*
Author Kieran
Date 09/10/2018
*/

#include <stdio.h>
#include <stdlib.h>
// Compiler version gcc 6.3.0

/*
The main method takes a number between 1 and 100 from the user and
attempts to guess the number
*/
 int main(void)
 {
 	const int MIN = 1;
 	const int MAX = 100;
 	printf("My turn to guess! Input a value between 1 and 100\n");
 	int input;
 	scanf("%d", &input);
 	if (input < MIN || input > MAX){
 		printf("Input a value greater than 0 and less than 100");
 		exit(1);
 	}
 	int min = MIN - 1;
 	int max = MAX + 1;
 	int mean;
 	for (int i = 1; i < 8; i ++){
 		printf("nth guess (%d)\n", i);
 		mean = (min+max)/2;
 		if (mean == input){
 			printf("I've got it! Your number is %d", mean);
 			break;
 		}
 		else if(mean < input){
 			min = mean;
 		}
 		else{
 			max = mean;
 		}
 	}



 	return 0;
 }
