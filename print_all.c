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
	char *str;
	unsigned int i = 0;
	int count = 0;

	va_start(argList, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				case 's':
				case '%':
					print_c_s_prct(argList, &count);
					break;
				case 'd':
				case 'i':
					print_d_i(argList, &count);
					break;
				case 'b':
					print_b(argList, &count);
				default:
					count += _putchar('%');
					count += _putchar(format[i]);
					break;
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(argList);
	return (count);
}
