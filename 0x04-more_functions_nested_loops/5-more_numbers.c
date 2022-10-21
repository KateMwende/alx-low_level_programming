#include "main.h"

/**
* more_numbers - Print numbers 10 times
*
*/
void more_numbers(void)
{
	int d, p;

	p = 0;

	while (p < 10)
	{

		for (d = 0; d <= 14; d++)
		{
		_putchar(d);
		}
		p++;
		_putchar('\n');
	}
}
