#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - Print n strings
*@separator: is the string to be printed between numbers
*@n: number of strings to be printed
*Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *p;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(str, char *);

		if (str == NULL)
			printf("(nil)");
		printf("%s", p);
/* separator is null don't print and last integer */
		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
