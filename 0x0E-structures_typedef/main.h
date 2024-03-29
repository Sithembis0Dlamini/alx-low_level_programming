#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);

#endif
