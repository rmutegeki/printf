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
	unsigned int count = 0;

	va_list(arguments);
	va_start(arguments, format);

	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			count++;
		}
		else
			/* To account for '%%' conversion specifier */
			if (format[index + 1] == '%')
			{
				_putchar('%');
				count++;
			} 
			/* Function Pointer to modifier functions */
			_select_mod(format[index + 1])(arguments);
			index++;
			count++;
	}
	va_end(arguments);
	return (count);
}