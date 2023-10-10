#include "dog.h"
#include <stdlib.h>

/**
 * inti_dog - A funcion to initialize a var of type dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	while (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
