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

	for (i = 0; i <= needle[i]; i++)
	{
		for (j = 0; j <= haystack[j]; j++)
		{
			if (needle[i+j] != haystack[j])
				break;
		}
		if (j == haystack[j])
		return (haystack);
	}
	return (NULL);
}
