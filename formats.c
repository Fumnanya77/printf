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

/**
 * _decimal - to print decimal numbers in formats
 *
 * @argu: the variadic variable for list of arguments
 *
 * Return: an integer; the count of characters printed
 */

int _decimal(va_list list)
{
	int x, j, n;
	unsigned int i = 0;

	x = va_arg(list, int);
	j = 1;
	if (x < 0)
	{
		i += _putchar('-');
		n = x * -1;
	}
	else 
		n = x;
	for (; (n / j) > 9; )
		j *= 10;
	for (;j != 0; )
	{
		i += _putchar('0' + (n / j));
		n %= j;
		j /= 10;
	}
	return (i);

}

int _integer(va_list argu)
{
	int _length;

	_length = _decimal(argu);
	return (_length);
}
