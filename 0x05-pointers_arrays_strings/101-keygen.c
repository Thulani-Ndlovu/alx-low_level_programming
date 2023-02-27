#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates a random valid password
* Return: 0 (success)
*/

int main(void)
{
	int n = 0;
	int sum = 0;
	int i = 0;
	int password[8];

	srand(time(NULL));

	while (i < 100)
	{
		password[i] = rand() % 78;
		sum = sum + (password[i] + '0');
		putchar(password[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum = sum + n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
