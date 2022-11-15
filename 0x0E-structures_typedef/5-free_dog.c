#include "dog.h"
#include <stdlib.h>
/**
* free_dog - frees dogs
* @d: pointer to structure to free
* Return: nothing
*/
void free_dog(dog_t *d)
{
		free(d->owner);
		free(d->name);
		free(d);
}