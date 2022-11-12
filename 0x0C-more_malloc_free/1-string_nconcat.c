#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to include of @s2
 *
 * Return: newly allocated space in memory;
 * NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int len;
	unsigned int j = 0;
	unsigned int m;
	unsigned int k = 0;
	unsigned int p;
	char *ar;

	/* if NULL is passed treast as empty string */

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* to find the size */

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
	j = n;
	len = i + j;

	ar = malloc(sizeof(char) * (len + 1));
	/* if malloc fails return NULL */

	if (ar == NULL)
		return (NULL);
	/* loop through length of s1 using p */
	for (p = 0; p < i; p++)
		ar[k++] = s1[p];
	/* loop through length of s2 using m */
	for (m = 0; m < j; m++)
		ar[k++] = s2[m];

	ar[k] = '\0';
	return (ar);

}
