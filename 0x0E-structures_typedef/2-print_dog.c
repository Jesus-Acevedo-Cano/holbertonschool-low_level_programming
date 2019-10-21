#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function to print dog structure
 * @d:something about the dog structure
 *
 *
 *
 * Description: dogs info
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == '\0')
		{
			d->name = "(Nil)";
		}
		if (d->owner == '\0')
		{
			d->owner = "(Nil)";
		}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}

}
