#ifndef DOG_H
#define DOG_H

#include <stddef.h>
/**
 * struct dog - Short description.
 * @name: First member.
 * @owner: Second member.
 * @age: Third member.
 * Description: make dog.h for the struct dog.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
