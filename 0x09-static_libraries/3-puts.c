#include "main.h"
/**
 * _puts - prints a string, followed by anew line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');
}
