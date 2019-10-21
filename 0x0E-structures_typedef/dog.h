#ifndef _MYDOG
#define _MYDOG
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - info about dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Description: dogs info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
