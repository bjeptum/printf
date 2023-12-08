#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strrev - reverses string
 * @str: stringto be reversed
 *
 * Return: pointer to reverse string
 */
char *_strrev(char *str)
{
	int length = 0;
	int start = 0;
	int end;
	char temp;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;

	end = length - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}

	return (str);
}
