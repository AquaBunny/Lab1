/*****************************
*trig.c
*Daniel Bachler
*CS160
*9-65-15
* Takes 3 inputs and calculates
* trig ratios for each
******************************/
/*math*/
#include<math.h>
/*scanf printf*/
#include <stdio.h>

int main(void) {
	/*creates the variables for user input*/
	float input1, input2, input3;
	/*gets input*/
	printf("Enter 3 numbers between 0 and 9.999: ");
	scanf("%f %f %f", &input1, &input2, &input3);
	/*creates table of values*/
	printf("\nNumber      sin      cos      tan      atan\n");	
	printf("-------------------------------------------\n");
	printf("%6.5f   %6.3f   %6.3f   %6.3f   %6.3f\n", input1, sin(input1), cos(input1), tan(input1), atan(input1));
	printf("%6.5f   %6.3f   %6.3f   %6.3f   %6.3f\n", input2, sin(input2), cos(input2), tan(input2), atan(input2));
	printf("%6.5f   %6.3f   %6.3f   %6.3f   %6.3f\n", input3, sin(input3), cos(input3), tan(input3), atan(input3));
	/*returns 0*/
	return 0;
}