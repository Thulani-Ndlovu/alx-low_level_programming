#include "main.h"

/**
* _strstr - locates a substring
* @haystack: points to the search string
* @needle: points to the match string
* Return: pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}

				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}

	if (*needle == 0)
		return (haystack);

	return (NULL);
}
