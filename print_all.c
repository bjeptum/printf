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
					count += _putchar(va_arg(argList, int));
					break;
				case 's':
					str = va_arg(argList, char*);
					if (str == NULL)
						str = "(nil)";
					while (*str)
					{
						count += _putchar(*str);
						str++;
					}
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					count += _putchar(format[i]);
					count += _putchar(format[i]);
					break;
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(argList);
	return (count);
}
