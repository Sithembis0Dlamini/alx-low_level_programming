#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: if n == 0 - 0.
 * Otherwise the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list qp;
	unsigned int z, sum = 0;

	va_start(qp, n);

	for (z = 0; z < n; z++)
		sum += va_arg(qp, int);

	va_end(qp);

	return (sum);
}
