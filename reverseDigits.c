// Reverse digits of a number (user-input)

#include <stdio.h>

int main(voi)
{
	int number, right_digit;
	
	printf("Enter the number you want to see reversed.\n");
	scanf("%i", &number);
	
	while ( number != 0 ) {
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;
	}
	
	printf("\n");
	
	return 0;
}

