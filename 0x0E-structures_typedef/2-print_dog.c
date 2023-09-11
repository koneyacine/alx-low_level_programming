#include <stdio.h>
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
printf("Name: %s\n", d->name ? d->name : "nil");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->Owner ? d->Owner : "nil");
}
