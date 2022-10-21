#include "main.h"

/**
* more_numbers - Print numbers 10 times
*
*/
void more_numbers(void)
{
	int d, p;


	for (p = 1; p <= 10; p++)
	{

		for (d = 0; d <= 14; d++)
		{
		_putchar(d);
		}
		p++;
		_putchar('\n');
	}
}
