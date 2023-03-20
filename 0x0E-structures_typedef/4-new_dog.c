#include <stdlib.h>
#include "main.h"
#include  "dog.h"
#include <stdio.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: the string to be measured
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
int len = 0;

while (*str++)
len++;

return (len);
}

/**
 * _strcpy - copies a string pointed to by src,
 * including the terminating null byte, to a buffer pointed to by dest.
 * @dest: the buffer storing the string copy.
 * @src: the source string.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
int index = 0;

for (index = 0; src[index]; index++)
dest[index] = src[index];

dest[index] = '\0';

return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog
 *
 * Return: the new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)

{
dog_t *new_dog;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

new_dog->name = _strcpy(new_dog->name, name);
new_dog->age = age;
new_dog->owner = _strcpy(new_dog->owner, owner);

return (new_dog);
}
