#include "main.h"
/**
 * print_c_s_prct - conversion specifier c,s and %
 * @count: count of characters printed
 * @argList: list of arguments
 * @format: character string
 * Return: chairacter to be printed
 */
void print_c_s_prct(va_list argList, int *count, const char *format)
{
	char c;
	char *str;

	switch (*format)
	{
		case 'c':
			c = va_arg(argList, int);
			*count += _putchar(c);
			break;
		case 's':
			str = va_arg(argList, char*);
			if (str == NULL)
				str = "(nil)";
			while (*str)
			{
				*count += _putchar(*str);
				str++;
			}
			break;
		case '%':
			*count += _putchar('%');
			break;
	}
}
