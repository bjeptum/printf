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
	int i = 0;

	va_start(argList, format);
	/* Function calls for conversion specifiers */
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			switch (format[i])
			{
			case 'c':
			case 's':
			case '%':
				print_c_s_prct(argList, &count, &format[i]);
				break;
			case 'd':
			case 'i':
				print_d_i(argList, &count);
				break;
			case 'b':
				print_b(argList, &count);
				break;
			default:
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(argList);
	return (count);
}
