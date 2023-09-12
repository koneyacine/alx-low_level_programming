#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free the memory for the name and owner strings */
	free(d->name);
	free(d->owner);

	/* Free the memory for the dog structure itself */
	free(d);
}
