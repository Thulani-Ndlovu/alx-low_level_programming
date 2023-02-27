#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates a random valid password
* Return: 0 (success)
*/

int main(void)
{
	char digits[10] = "0123456789";
	char small_letters[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper_case[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char characters[17] = "!@#$%^&*+_-?><|/";
	int i = 0;
	char password[8];

	srand(time(NULL));

	while (i < 8)
	{
		if (i == 0 || i == 7)
			password[i] = upper_case[(rand() % 26)];
		else if (i == 1 || i == 6)
			password[i] = small_letters[(rand() % 26)];
		else if (i == 2 || i == 5)
			password[i] = digits[(rand() % 10)];
		else
			password[i] = characters[(rand() % 17)];

		i++;
	}

	printf("%s\n",password);

	return (0);
}
