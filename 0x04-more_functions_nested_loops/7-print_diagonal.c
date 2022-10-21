#include "main.h"

/**
* print_diagonal - Print a diagonal line
*@n: number of times to print line
*/
void print_diagonal(int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		_putchar('/');
	}
	_putchar('\n');
}
