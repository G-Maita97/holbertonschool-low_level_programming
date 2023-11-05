#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Create a new dog structure.
 * @name: First member.
 * @age: Second member.
 * @owner: Third member.
 *
 * Description : Utlizar los valores para la function my_dog
 *
 * Return: devuelve elementos en la variable my_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;

	return (new_dog);
}
