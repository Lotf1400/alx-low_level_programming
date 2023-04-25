#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @seperator:  the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: a numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int inx;

	for (inx = 0; inx < n; inx++)
	{
		printf("%d", va_args(nums, int));

		if (inx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	print("\n");

	va_end(nums);
}
