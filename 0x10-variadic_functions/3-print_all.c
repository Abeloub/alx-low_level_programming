#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "", *s;
	va_list p;

	va_start(p, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(p, int));
					break;
			case 'i':
				printf("%s%d", separator, va_arg(p, int));
					break;
			case 'f':
				printf("%s%f", separator, va_arg(p, double));
					break;
			case 's':
				s = va_arg(p, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(p);
}
