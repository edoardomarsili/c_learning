// Program that converts F° to C°

// Fahrenheit: 27
// Formula: C = (F - 32) / 1.8
#include <stdio.h>

int main(void){
	float fahrenheit, celsius;
	char temperature_char;
	
	// fahrenheit = 27;
	// temperature_char = 'F'; // U+00B0
	
	printf("How many Fahrenheit you want to convert? ");
	scanf("%f", &fahrenheit);
	
	// Declare the arithmetic expression
	celsius = (fahrenheit - 32)/1.8;
	
	printf("\n%f%c in Celsius is %f%c", fahrenheit, temperature_char = 'F', celsius, temperature_char = 'C');
	
	return 0;
}
