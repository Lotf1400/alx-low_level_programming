#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to initialize
 * @name: character to initialize
 * @age: the age to initialize
 * @owner: char to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(structdog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
