#include "dog.h"

/**
 * init_dog  - initializes the values of a struct
 * @d: the address to the struct variable
 * @name: the name of the dog
 * @age: the age of thew dog
 * @owner: the owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
