#include "main.h"
/**
 * handle_format_specifier - iterates through the formats
 * @format: list of types of arguments passed to the function
 * @argList: list of arguments
 * Return: Always 0
 */
int handle_format_specifier(va_list argList, char *format)
{
	int count = 0;
	int i = 0;

	switch (format[i])
	{
		case 'c':
		case 's':
		case '%':
			print_c_s_prct(argList, &count, &format[i]);
			i++;
			break;
		case 'd':
		case 'i':
			print_d_i(argList, &count);
			i++;
			break;
		case 'b':
			print_b(argList, &count);
			i++;
			break;
		default:
			_putchar('%');
			_putchar(format[i]);
			count += 2;
			i++;
	}
	return (count);
}
