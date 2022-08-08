#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* _select_mod -Function to print character
* @c:			Character to be printed out
* Return:		defualt NULL returned
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

	if (c == 'b')
		return (_print_b);

	if (c == 'u')
		return (_print_u);

	if (c == 'o')
		return (_print_o);

	return (NULL);
}
