#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

/**
* struct printer -	Structure of conversion specificers
*			used to format strings and numbers
* @specifier:		input character to represent conversion
*			specifier
* @run:		fun to represent code for conversion
*			specifier
* Return:	function to the specifier
*/
typedef struct printer
{
	char *specifier;
	int (*run)(va_list);
} printer;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list arguments);
int _print_str(va_list arguments);
int _print_i(va_list arguments);
int _print_d(va_list arguments);
int _print_b(va_list arguments);
printer _get_printer(const char *specifier);
#endif /* _MAIN_H_ */
