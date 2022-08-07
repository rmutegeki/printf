#include <stdlib.h>
#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list arguments;
	int (*func_sel)(va_list);
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

		func_sel = _select_mod(format[index + 1]);
		if (func_sel != NULL)
		{
			characters_printed += func_sel(arguments);
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