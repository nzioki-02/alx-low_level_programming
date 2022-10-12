#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializing a dog variable
 * @d: Dog to be initalized
 * @name: dog name
 * @age: dog age
 * @owner: dog oner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
