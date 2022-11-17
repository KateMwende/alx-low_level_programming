#include "function_pointers.h"
#include "stdlib.h"

/**
*int_index - search for an index
*@array: array to  be searched
*@size: size of array
*@cmp: pointer to function to be used to compare values
*Return: Integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) && array[i] != 0)
			break;
		if (i == size - 1)
			return (-1);
	}
	return (i);
}
