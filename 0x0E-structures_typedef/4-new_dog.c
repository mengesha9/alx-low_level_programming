#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* length - returns length of string
*@s: a string
*Return: i
*/

int length(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
* strcopy - prints n elements of array
*@dest: string
*@src: string
*Return: dest
*/

char *strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - createds a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pupper;
	char *name_copy, *copy_owner;

	pupper = malloc(sizeof(dog_t));
	if (pupper == NULL)
		return (NULL);

	pupper->age = age;

	if (name != NULL)
	{
		name_copy = malloc(length(name) + 1);
		if (name_copy == NULL)
		{
			free(pupper);
			return (NULL);
		}
		pupper->name = strcopy(name_copy, name);
	}
	else
		pupper->name = NULL;

	if (owner != NULL)
	{
		copy_owner = malloc(length(owner) + 1);
		if (copy_owner == NULL)
		{
			free(name_copy);
			free(pupper);
			return (NULL);
		}
		pupper->owner = strcopy(copy_owner, owner);
	}
	else
		pupper->owner = NULL;

	return (pupper);
}

