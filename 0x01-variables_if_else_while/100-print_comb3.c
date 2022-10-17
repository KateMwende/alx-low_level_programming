#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, p;

	for (n = 0; n <= 9; n++)
	{
		for (p = n + 1; p <= 9; p++)
		{
			putchar((n % 10) + '0');
			putchar((p % 10) + '0');

			putchar(',');

			if (n == 8 && p == 9)

			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
