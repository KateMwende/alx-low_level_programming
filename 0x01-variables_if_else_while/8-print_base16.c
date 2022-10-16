#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int d;
	char hexa;

	for (d = '0'; d <= '9'; d++)
		putchar(d);

	for (hexa = 'a'; hexa <= 'f'; hexa++)
		putchar(hexa);

	putchar('\n');
	return (0);

}
