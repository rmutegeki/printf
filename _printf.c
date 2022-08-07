#include <stdlib.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf -    Function to print out on Standard
 *              output
 * @format:     Variable part of function mandatory
 *              arguments 
 * @...:        Optional part of function to be 
 *              filled with variable number of
 *              arguments
 * Return:      Returns an integer value 
 */
int _printf(const char *format, ...)
{
	int index;
	char *str = NULL;
	unsigned int count = 0;

	va_list(arguments);
	va_start(arguments, format);

	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] != '%')
		{
			count += _print_char(format[index]);
		}
		/* To account for '%c' conversion specifier */
		else 
			if (format[index + 1] == 'c')
			{
				count += _print_char(va_arg(arguments, int));
				index++;
			}
		/* To account for '%s' conversion specifier */
			else if (format[index + 1] == 's')
			{
				str = va_arg(arguments, char*);
				index++;
			
				count += _print_str(str);
			}
		/* To account for '%%' conversion specifier */
			else if (format[index] == '%' && format[index + 1] == '%')
			{
				count += _print_char('%');
			}
		/* To account for '%d' conversion specifier */
			else if (format[index] == '%' && format[index + 1] == 'i')
			{
				count += _print_i(va_arg(arguments, int));
				index++;
			}
			else if (format[index] == '%' && format[index + 1] == 'd')
			{
				count += _print_d(va_arg(arguments, int));
				index++;
			}
			else if (format[index] == '%' && format[index + 1] == 'b')
			{
				count += _print_b(va_arg(arguments, int));
				index++;
			}
	}
	va_end(arguments);
	return (count);
}