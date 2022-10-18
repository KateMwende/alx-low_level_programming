#include "main.h"

/**
* print_alphabet_x10 - Print ten times the  alphabet
*/
void print_alphabet_x10(void)
{
	int d, p;

	p = 0;

	while (p <= 10)
	{

		for (d = 'a'; d <= 'z'; d++)
		{
		_putchar(d);
		}
		p++;
	}
	_putchar('\n');
}
