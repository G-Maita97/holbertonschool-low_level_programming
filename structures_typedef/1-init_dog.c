#include "dog.h"
/**
 * init_dog - function called.
 * struct dog - struct the code.
 * @d: pointer
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description : redirec values.
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
