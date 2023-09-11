#include<stdio.h>
#include "dog.h"
/**
* print_dog - Prints informations about a dog stucture
*  @d : Pointter to the dog structur.
*  Return :void
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
printf("Name: %s", (d->name == NULL) ? "nil" : d->name);
print("Age: %.6f\n", d->age);
printf("Owner %s", (d->)Owner == NULL) ? "nil" : d->Owner);
}
