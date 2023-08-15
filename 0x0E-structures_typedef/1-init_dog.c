#include "main.h"
#include "dog.h"
/**
 * init_dog - Initializes a dog variable
 *
 * @d: The struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
