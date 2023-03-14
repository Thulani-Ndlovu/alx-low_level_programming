#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to a concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len_s1 = 0;
	int len_s2 = 0;
	int i;
	int j;

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	ptr = (char *) malloc((len_s1 + len_s2 + 2) * sizeof(char));
	for (i = 0; i < len_s1; i++)
		ptr[i] = s1[i];
	i = len_s1;

	for (j = 0; j < len_s2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	return (ptr);
}
