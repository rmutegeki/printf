#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* _get_printer -Function to print character
* @specifier:	Character to be printed out
* Return:		defualt NULL returned
*/
printer _get_printer(const char *specifier)
{
	int index;
	static printer printers[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"i", _print_i},
		{"d", _print_d},
		{NULL, NULL}
	};

	for (index = 0; printers[index].specifier != NULL; index++)
	{
		/**
		* This current implementation assumes the specifer
		* is one character long. This needs to be updated to
		* support specifiers contiaining more characters
		*/

		if (*specifier == *(printers[index].specifier))
			break;
	}

	return (printers[index]);
}
