#include "main.h"

/**
* _strcat - concatenate strings
* @dest: first string pointer
* @src: 2nd string pointer
* Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j, p;

	i = 0;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}

	j = 0;

	while (*src != '\0')
	{
		src++;
		j++;
	}

	for (p = 0; p <= j; p++)
	{
		dest[i + p] = src[p];
	}
	return (dest);
}
