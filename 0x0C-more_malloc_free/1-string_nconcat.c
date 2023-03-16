#include "main.h"

/**
* lengths - calculates the lengths of each string
* @s1: destination string
* @s2: source string
* Return: pointer to an array with the string lengths
*/

int *lengths(char *s1, char *s2)
{
	static int len[2] = {0};
	int len_s1 = 0;
	int len_s2 = 0;

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	len[0] = len_s1;
	len[1] = len_s2;

	return (len);
}

/**
* string_nconcat - concatenates two strings
* @s1: destination string
* @s2: source string
* @n: number of characters to copy
* Return: concatenated string, or NULL if function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int *lens;
	char *ptr;
	unsigned int len_s1 = 0, len_s2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lens = lengths(s1, s2);
	len_s1 = lens[0];
	len_s2 = lens[1];

	if (n >= len_s2)
		n = len_s2;

	ptr = malloc(sizeof((*ptr) * (n + len_s1 + 1)));

	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	i = len_s1;

	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
