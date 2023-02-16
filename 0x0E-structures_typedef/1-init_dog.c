#include "dog.h"

/**
 * init_dog - init a dog wit its struct
 * @d: pointer to a dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: int a dog with its struct
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
