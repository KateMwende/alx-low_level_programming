#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - Print n numbers
*@separator: is the string to be printed between numbers
*@n: number of numbers to be printed
*Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int p = 0, i;

	if (separator == NULL)
		return;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(nums, int);

		printf("%d%s", p, separator);
	}
	va_end(nums);
	printf("\n");
}
