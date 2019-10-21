#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function to print dog structure
 * @d:something about the dog structure
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
	{
		return;
	}
}
