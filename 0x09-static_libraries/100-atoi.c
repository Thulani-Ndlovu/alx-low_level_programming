#include "main.h"

/**
* _atoi - converts charecter to integer
* @s: pointer to character
* Return: integer
*/

int _atoi(char *s)
{
	unsigned int answer = 0;
	int polarity = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			polarity *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			answer = (answer * 10) + (s[i] - '0');
		else if (answer > 0)
			break;
		i++;
	}

	return (answer * polarity);
}
