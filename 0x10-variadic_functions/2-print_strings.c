#include "variadic_functions.h"

/**
* print_strings - print strings, followed by a new line
* @separator: strign to be printed between the strings
* @n: number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (*s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < (n - 1))
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

