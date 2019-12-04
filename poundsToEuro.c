/*
Author Kieran
Date 09/10/2018
*/

#include <stdio.h>
 //Compiler version gcc 6.3.0

/*
The main method prints set prices in GBP and Euros
*/
 int main(void)
 {
 	double pound_euro = 1.17;
 	printf("UK Pounds  EUROS \n");
 	printf("%9.2f %6.2f \n", 1.0, pound_euro);
 	for(double i = 10; i < 101; i+= 10){
 		double j = i*pound_euro;
 		printf("%9.2f %6.2f \n", i, j);
 	}
 	return 0;
 }
