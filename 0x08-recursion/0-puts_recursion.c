#include "main.h"
#include <stdio.h>

/**
 * puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		puts_recursion(s + 1);
	}

	else
		putchar('\n');
}
