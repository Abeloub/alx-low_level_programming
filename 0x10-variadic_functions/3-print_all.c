#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: list of types of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list a;

	va_start(a, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a, int));
				(format[i + 1] != '\0') ? printf(", ") : printf("%s", "");
				break;
			case 'i':
				printf("%i", va_arg(a, int));
				(format[i + 1] != '\0') ? printf(", ") : printf("%s", "");
				break;
			case 'f':
				printf("%f", va_arg(a, double));
				(format[i + 1] != '\0') ? printf(", ") : printf("%s", "");
				break;
			case 's':
				str = va_arg(a, char*);
				printf("%s", str ? str : "(nil)");
				(format[i + 1] != '\0') ? printf(", ") : printf("%s", "");
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(a_list);
}
