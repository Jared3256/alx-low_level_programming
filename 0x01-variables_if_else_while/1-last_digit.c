#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)
	
{
	
	int n;
	int remainder;

	
	srand(time(0));
	
	n = rand() - RAND_MAX / 2;
	
	/* your code goes there */
	remainder = n % 10;
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n , remainder);
	}
	else if (remainder <  5 && remainder > 0)
	{
		printf("Last digit of %d is %d and is less than 5 and not 0\n", n , remainder);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n , remainder);
	}
	return (0);
	
}
