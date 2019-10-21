#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "holberton.h"

/**
 * init_dog - function to initialize dog structure
 * @d:something about the dog structure
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Description: dogs info
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
