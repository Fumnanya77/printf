#include "main.h"

/**
 * _printf - print out the arguments to the standard output
 *
 * @format: the start of the endless arguments
 *
 * Return: An integer; the number of characters printed
 */

int _printf(const char *format, ...)
{
	int print_ch;

	convert list[] = {
		{"c", _char},
		{"s", _string},
		{"%", _percent},
		{"d", _integer},
		{"i", _integer},
		{NULL, NULL}
	};
	va_list argu;

	if (format == NULL)
		return (-1);

	va_start(argu, format);

	print_ch = _traverser(format, list, argu);

	va_end(argu);
	return (print_ch);
}
