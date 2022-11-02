#include "main.h"
#include <stddef.h>

/**
* _strstr - searches for a substring
* @needle: the substring to search for
* @haystack: string to search
* Return: a pointer to the beginning of the located substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
				return (needle);
		}
	}
	return (NULL);
}
