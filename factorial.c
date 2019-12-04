/*
Author Kieran
Date 09/10/2018
*/

#include <stdio.h>
 //Compiler version gcc 6.3.0

// Declare factorial function
int factorial(int n);

 int main(void)
 {
 	// Test function with value of 5, answer is 120
 	printf("%d", factorial (5));
 	return 0;
 }

/*
Method factorial
Inputs integer n
Outputs integer answer

The factorial method calculates the result of
n! For example 4! would be 4*3*2*1 = 24
*/
int factorial(int n){
	if(n<1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
