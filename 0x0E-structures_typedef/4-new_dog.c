#include <stdlib.h>
#include "main.h"
#include  "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: 1st member
 * @age:2nd member
 * @owner: 3rd member
 *
 * Return: NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int i, len1, len2;

struct dog *new_dog = NULL;

len1 = 0;
while (name[len1] != '\0')
len1++;
len2 = 0;
while (owner[len2] != '\0')
len2++;
new_dog = malloc(sizeof(struct dog));
if (new_dog == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = malloc(len2 + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog->owner);
free(new_dog);
return (NULL);
}
for (i = 0; i <= len1; i++)
new_dog->name[i] = name[i];
for (i = 0; i <= len2; i++)
new_dog->owner[i] = owner[i];
new_dog->age = age;
return (new_dog);
}
