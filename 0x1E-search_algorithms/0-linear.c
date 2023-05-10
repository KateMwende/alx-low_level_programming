#include "search_algos.h"
#include <stdio.h>
/**
 *linear_search - searches for a value in an array of integers
 *@array: The array to be traversed
 *@size: Number of elements in the array
 *@value: The integer being searched for
 *Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%ld]\n", i, array[i]);
		if (array(i) == value)
	{
		return (i);
	}
	}
	return (-1);
}
