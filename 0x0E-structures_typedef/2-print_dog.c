#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - A function that prints a struct dog
 * @dog: struct to be initialized
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
