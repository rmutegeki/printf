#include "main.h"
#include <stdarg.h>

/**
* _print_b -	Function to convert unsigned int to
* @arguments:	Binary notation (b)
* Return:      Prints out integer number
*/
int _print_b(va_list arguments)
{
	unsigned int divisor = 2147483648; /* 2 ^ 31 */
	unsigned int number[32];
	unsigned int index, num_elements;
	int count;
	unsigned int num = va_arg(arguments, int);

	number[0] = num / divisor;

	for (index = 1; index < 32; index++)
	{
		divisor /= 2;
		number[index] = (num / divisor) % 2;
	}

	for (index = 0, num_elements = 0; index < 32; index++)
	{
		num_elements += number[index];

		if (num_elements || index == 31)
			_putchar(number[index] + '0');
			count++;
	}

	return (0);
}
