#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - print a list of strings
  * @separator: characters used to delimit
  * @n: nmber of items to print
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);
	for (i = 0; i < n; ++i)
	{
		s = va_arg(list, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
