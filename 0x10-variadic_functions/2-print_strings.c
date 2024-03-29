#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variab,e number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 * if one of the  strings is NULL, (nil) is printed instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lion;
	char *str;
	unsigned int cow;

	va_start(lion, n);
	for (cow = 0; cow < n; cow++)
	{
		str = va_arg(lion, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (cow != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lion);
}
