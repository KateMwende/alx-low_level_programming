#include "main.h"

/**
*puts2 - Prints every other character
*@str: String pointer
*Return: void
*/
void puts2(char *str)
{
	for (; *str != '\0'; str++)
	if (*str % 2 == 0)
		_putchar(*str);

	_putchar('\n');
}
