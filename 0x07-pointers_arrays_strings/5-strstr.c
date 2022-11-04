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
	int i, j = 0;

	while (*haystack)
	{
		for (i = 0; i < needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
