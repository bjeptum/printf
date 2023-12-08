#include "main.h"
/**
 * _printf - produces outpur according to a format
 * @format: list of types of arguments passed to the function
 *
 * Return: Always 0 on failure
 */
int _printf(const char *format, ...)
{
	va_list argList;
	int count = 0;

	va_start(argList, format);

	/* Function calls for conversion specifiers */
	print_c_s_prct(argList, &count, format);
	print_d_i(argList, &count);
	print_b(argList, &count);

	va_end(argList);

	return (count);
}
