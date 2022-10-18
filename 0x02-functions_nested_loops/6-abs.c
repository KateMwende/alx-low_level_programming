#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @b: integer input
 * Return: absolute value of b
 */
int _abs(int b)
{
	return (b * ((b > 0) - (b < 0)));
}
