#include "main.h"
/**
 * _itoa - convert integer to string
 * @i: integer to be converted
 * @buff: buffer to store the result
 * @base: the base for conversion
 *
 * Return: pointer to string
 */
char *_itoa(int i, char *buff, int base)
{
	int is_negative = 0;
	int n = i;
	int digit, index = 0;

	if (i == 0)
	{
		buff[0] = '0';
		buff[1] = '\0';
		return (buff);
	}

	if (i < 0 && base == 10)
	{
		is_negative = 1;
		n = -i;
	}

	/** Generate digits in reverse*/
	while (n != 0)
	{
		digit = n % base;
		buff[index++] = (digit > 9) ? ('A' + digit - 10) : ('0' + digit);
		n = n / base;
	}
	/* Add negative sign if necessary */
	if (is_negative && base == 10)
		buff[index++] = '-';
	/* Add null terminator */
	buff[index] = '\0';
	/* Reverse the string */
	_strrev(buff);

	return (buff);
}

