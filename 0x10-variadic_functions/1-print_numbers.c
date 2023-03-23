#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, fpllowed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list z;
	unsigned int bird;

	va_start(z, n);

	for (bird = 0; bird < n; bird++)
	{
		printf("%d", va_arg(z, int));

		if (bird != (n - 1) && separator != NULL)
			printf("%d", separator);
	}
	printf("\n");
	va_end(z);
}
