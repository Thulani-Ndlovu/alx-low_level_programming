#include "main.h"

/**
* _len_s1 - length of string 1
* @s1: string 1
* Return: length of string 1
*/

int _len_s1(char *s1)
{
	int len_s1 = 0;

	while (s1[len_s1] != '\0')
		len_s1++;
	return (len_s1);
}

/**
* _len_s2 - length of string 2
* @s2: string 2
* Return: length of s2
*/

int _len_s2(char *s2)
{
	int len_s2 = 0;

	while (s2[len_s2] != '\0')
		len_s2++;

	return (len_s2);
}

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

	if (s1 == NULL && s2 == NULL)
	{
		return (0);
	}
	if (s1 == NULL && s2 != NULL)
	{
		len_s2 = _len_s2(s2);
		ptr = (char *) malloc((len_s2 + 1) * sizeof(char));
		for (i = 0; i < len_s2; i++)
			ptr[i] = s2[i];
	}
	if (s1 != NULL && s2 == NULL)
	{
		len_s1 = _len_s1(s1);
		ptr = (char *) malloc((len_s1 + 1) * sizeof(char));
		for (i = 0; i < len_s1; i++)
			ptr[i] = s1[i];
	}
	else if (s1 != NULL && s2 != NULL)
	{
		len_s1 = _len_s1(s1);
		len_s2 = _len_s2(s2);
		ptr = (char *) malloc((len_s1 + len_s2 + 1) * sizeof(char));
		for (i = 0; i < len_s1; i++)
			ptr[i] = s1[i];
		i = len_s1;
		for (j = 0; j < len_s2; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}
	i = len_s1 + len_s2;
	ptr[i] = '\0';
	return (ptr);
}
