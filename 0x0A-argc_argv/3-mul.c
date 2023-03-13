#include "main.h"
#include <stdio.h>

/**
 * main - Prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
int q, p;
if (argc == 3)
{
q = atoi(argv[1]);
p = atoi(argv[2]);
printf("%d\n", q *p);
return (0);
}
printf("Error\n");
return (1);
}
