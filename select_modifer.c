#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* _print_char -	Function to print character 
* @c:			Character to be printed out			
* Return:		(1) for character printed
*/
int (*_select_mod(char c))(va_list)
{
	if (c == 'c')
		return (_print_char);
	
	if (c == 's')
		return (_print_str);
	
	if (c == 'i')
		return (_print_i);

	if (c == 'd')
		return (_print_d);
	
	return (NULL);
}