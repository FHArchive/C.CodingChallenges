/*
Author Kieran
Date 09/10/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 //Compiler version gcc 6.3.0

/*
The main method generates a random number and gives the user 7 attempts
to guess it. If the user is successful, a "well done" message
is outputted and the program is terminated
*/
 int main(void)
 {
 	int rand_number;
 	// rand() % (max_number + 1 - minimum_number) + minimum_number
 	rand_number = rand() % 100 +1;
 	int input;
 	printf("I've come up with a number between 1 and 100, you have 7 guesses\n");
 	for (int i = 0; i < 7; i++){
 		printf("What is your guess?\n");
 		scanf("%d", &input);
 		if (input < 1 || input > 100){
 			printf("Input a value greater than 0 and less than 100");
 			exit(1);
 		}
 		if (input == rand_number){
 			printf("Well done, you guessed correctly");
 			break;
 		}
 		else if(input <= rand_number){
 			printf("Too low\n");
 		}
 		else{
 			printf("Too high\n");
 		}
 	}

 	return 0;
 }
