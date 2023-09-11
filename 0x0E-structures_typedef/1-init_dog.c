#include "dog.h"
/**
* init_dog - Initializes a dog structure.
* @d: Pointer to the dog structure.
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
* Description: This function initializes
* a dog structure with provided values.
* Return :void
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
