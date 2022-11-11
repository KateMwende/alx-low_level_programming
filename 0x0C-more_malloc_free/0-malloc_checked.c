#include "main.h"
#include <stdlib.h>

/**
* malloc_checked- check if malloc terminates with status value 98
* @b: size
*Return: pointer
*/
void *malloc_checked(unsigned int b)
{

	unsigned int *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);

	return (check);
}
