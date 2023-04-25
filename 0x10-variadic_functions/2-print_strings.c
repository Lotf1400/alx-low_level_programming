#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - it prints strings followed by a new line
 * @separator: a str to be printed between strings
 * @n: the number of strings passed to the function
 * @...: a number of strings to be printed
 * Retrun: if separator is NULL dont print it
 * if one of the strings is NULL, print (nil)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *abc;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		abc = va_arg(str, char *);

		if (abc == NULL)
			printf("(nil)");
		else
			printf("%s", abc);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(str);
}
