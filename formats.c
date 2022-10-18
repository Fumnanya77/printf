#include "main.h"

/**
 * _char - to print char formats
 *
 * @argu: the variadic variable for list of arguments
 *
 * Return: an integer; the count of characters printed
 */

int _char(va_list argu)
{
	_putchar(va_arg(argu, int));
	return (1);
}

/**
 * _string - to print string formats
 *
 * @argu: the variadic variable for list of arguments
 *
 * Return: an integer; the count of characters printed
 */

int _string(va_list argu)
{
	int i;
	char *str;

	str = va_arg(argu, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * _percent - to print % in formats
 *
 * @argu: the variadic variable for list of arguments
 *
 * Return: an integer; the count of characters printed
 */

int _percent(__attribute__((unused))va_list argu)
{
	_putchar('%');
	return (1);
}
