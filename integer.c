#include "main.h"
/**
 * print_d_i - implements d and i conversion
 * @argList: list of arguments
 * @count: count of characters to be printed
 * Return: Characters to be printed
 */
void print_d_i(va_list argList, int *count)
{
	char buffer[12];
	char *ptr = buffer;

	int num = va_arg(argList, int);

	_itoa(num, buffer, 10);

	while (*ptr)
	{
		*count += _putchar(*ptr);
		ptr++;
	}
}
/**
 * print_b - implements unsigned int conversion
 * @count: coutn of characters to eb printed
 * @argList: list of arguments
 * Return: Characters to be printed
 */
void print_b(va_list argList, int *count)
{
	unsigned int num = va_arg(argList, unsigned int);
	char buffer[32];
	char *ptr = buffer;

	_itoa(num, buffer, 2);

	while (*ptr)
	{
		*count += _putchar(*ptr);
		ptr++;
	}
}
