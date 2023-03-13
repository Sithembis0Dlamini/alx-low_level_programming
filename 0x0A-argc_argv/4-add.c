#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num -check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)

{
	unsigned int count;

	count = 0;
	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int count;
	int v;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			v = atoi(argv[count]);
			sum += v;
		}

		else
		{
			printf("Error\n");
			return (0);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
