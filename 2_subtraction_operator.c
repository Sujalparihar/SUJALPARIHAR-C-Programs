// Title of program
//Write a program using subtraction operator
// Header Files
#include<stdio.h>
// Function Heading
void main() {
	// variable Declaration
	int var1, var2, difference;
	// Output Statement (prompt)
	printf("Enter two numbers to be subtracted\n");
	//Input Statement
	scanf("%d%d", &var1, &var2);	
	//Assignment statement
	difference= var1-var2;
	// Output Statement
	printf("%d-%d=%d", var1, var2, difference);
}