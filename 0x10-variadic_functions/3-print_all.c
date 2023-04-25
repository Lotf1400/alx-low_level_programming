#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: a list of types of args passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *abc, *str = "";

	va_list delf;
	va_start(delf, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", str, va_arg(delf, int));
					break;
				case 'i':
					printf("%s%d", str, va_arg(delf, int));
					break;
				case 'f':
					printf("%s%f", str, va_arg(delf, double));
					break;
				case 's':
					abc = va_arg(delf, char *);
					if (!abc)
						str = "(nil)";
					printf("%s%s", str, abc);
					break;
				default:
					i++;
					continue;
			}
			str = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(delf);
}
