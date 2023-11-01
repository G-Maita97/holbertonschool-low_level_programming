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
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
