#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialize struct variable
 * @d: pointer to store data for struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 * Return: d pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
