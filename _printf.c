#include <stdlib.h>
#include "main.h"
#include <stdarg.h>

/**
* _printf - function for printing
* @format: The char to be printed
* Return:	Returns a string
*/
int _printf(const char *format, ...)
{
	va_list arguments;
	printer printer;
	int index = 0;
	int characters_printed = 0;

	va_start(arguments, format);
	while (format[index])
	{
		for (; format[index] != '%' && format[index]; index++)
		{
			_putchar(format[index]);
			characters_printed++;
		}

		if (!format[index])
			break;

		printer = _get_printer(&format[index + 1]);
		if (printer.specifier != NULL)
		{
			characters_printed += printer.run(arguments);
			index += 2; /* move past the specifier */
			continue;
		}

		_putchar(format[index]);
		characters_printed++;

		if (format[index + 1] == '%')
			index += 2; /* move past the % */
		else
			index++;
	}

	va_end(arguments);
	return (characters_printed);
}
