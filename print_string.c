#include "main.h"

/**
 * print_string - Print string
 * @list: list.
 *
 * Return: String length.
 */

int print_string(va_list list)
{
	char *p;
	int p_len = 0;

	p = va_arg(list, char*);

	if (p == NULL)
		p = "(null)";
	for (; p[p_len]; p_len++)
	{
		_putchar(p[p_len]);
	}
	return (p_len);
}
