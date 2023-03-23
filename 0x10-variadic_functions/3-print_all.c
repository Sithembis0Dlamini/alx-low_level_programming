#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int dog = 0;
	char *rabbit, *frog = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[dog])
		{
			switch (format[dog])
			{
				case 'c':
					printf("%s%c", frog, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", frog, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", frog, va_arg(list, double));
					break;
				case 's':
					rabbit = va_arg(list, char *);
					if (!rabbit)
						rabbit = "(nil)";
					printf("%s%s", frog, rabbit);
					break;
				default:
					dog++;
					continue;
			}
			frog = ", ";
			dog++;
		}
	}

	printf("\n");
	va_end(list);
}
