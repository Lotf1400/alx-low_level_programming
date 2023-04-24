#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all the parameters
 * @n: the num passed to the function
 * @...: a number of parameters to calculate their sum
 * Return: 0 if n == 0, otherwise the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	insigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		
		sum += va_arg(ap, int);
	
	va_end(ap);

	return (sum);
}
