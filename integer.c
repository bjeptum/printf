#include "main.h"
/**
 * print_d_i - implements d and i conversion
 * @argList: list of arguments
 * @count: count of characters to be printed
 * Return: Characters to be printed
 */
void print_d_i(va_list argList, int *count)
{
	int num = va_arg(argList, int);
	char buffer[12];

	_itoa(num, buffer, 10);

	char *ptr = buffer;

	while (*ptr)
	{
		*count += _putchar(*ptr);
		ptr++;
	}
}
/**
 * print_b - implements unsigned int conversion
 * @argList: list of arguments
 * @count: coutn of characters to eb printed
 * Return: Characters to be printed
 */
void print_b(va_list argList, int *count)
{
	unsigned int num = va_arg(argList, unsigned int);
	char buffer[32];

	_itoa(num, buffer, 2);

	char *ptr = buffer;

	while (*ptr)
	{
		*count += _putchar(*ptr);
		ptr++;
	}
}