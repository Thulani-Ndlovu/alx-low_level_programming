#include "variadic_functions.h"

/**
* print_all - prints anything
* @format: list of types of arguments passed on the function
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int c = 0, i = 0, nav;
	const char arg_types[] = "cifs";
	char *s;

	va_start(ap, format);
	while (format && format[i])
	{
		nav = 0;
		while (arg_types[nav])
		{
			if (format[i] == arg_types[nav] && c)
			{
				printf(", ");
				break;
			} nav++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), c = 1;
				break;
			case 's':
				s = va_arg(ap, char *), c = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		} i++;
	}
	printf("\n"), va_end(ap);
}
