#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: create a new dog
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy;
	char *owner_copy;
	dog_t *d;

	d = malloc(sizeof(dog_t));
	name_copy = malloc(strlen(name) + 1);
	owner_copy = malloc(strlen(owner) + 1);
	if (d && name_copy && owner_copy)
	{
		strcpy(name_copy, name);
		strcpy(owner_copy, owner);
		d->age = age;
		d->name = name_copy;
		d->owner = owner_copy;
	}
	else
	{
		free(name_copy);
		free(owner_copy);
		free(d);
		return (NULL);
	}
	return (d);
}
