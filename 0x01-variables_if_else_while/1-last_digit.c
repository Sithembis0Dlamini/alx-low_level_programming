#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Prints the last digit
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n");
	}
	else if (n < 6 && != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n");
	}

	return (0);
}
