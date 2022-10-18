#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all argument
 * @n: number of argument to sum
 * Return: sum of all argument
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i =; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg)
		return (sum);
}
