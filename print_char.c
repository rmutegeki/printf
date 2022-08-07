#include "main.h"
#include <stdarg.h>

/**
* _print_char -	Function to print character 
* @c:			Character to be printed out			
* Return:		(1) for character printed
*/
int _print_char(va_list arguments)
{
	char c = va_arg(arguments, int);
	_putchar(c);
	return (0);
}

/**
 * _print_str - prints a string
 * @s: string to print
 *
 * Return: number of chars printed
 */
int _print_str(va_list arguments)
{
	char *s = va_arg(arguments, char *);
	int count;

	for (count = 0; s[count]; count++)
	{
		_putchar(s[count]);
	}
	return (0);
}
				
