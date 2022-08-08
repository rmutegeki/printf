#include "main.h"
#include <stdarg.h>

/**
* _print_u -	Function print out intger (u)
* @arguments:	Unsigned intger to be printed out
* Return:		Prints out integer number
*/
int _print_u(va_list arguments)
{
	unsigned int divisor = 1000000000; /* 10 ^ 9 */
	unsigned int number[10];
	unsigned int index, num_elements;
	int count;
	unsigned int num = va_arg(arguments, unsigned int);

	number[0] = num / divisor;

	for (index = 1; index < 10; index++)
	{
		divisor /= 10;
		number[index] = (num / divisor) % 10;
	}

	for (index = 0, num_elements = 0; index < 10; index++)
	{
		num_elements += number[index];

		if (num_elements || index == 9)
		{
			_putchar(number[index] + '0');
			count++;
		}
	}

	return (count);
}

/**
* _print_o -	Function print out octal notation
* @arguments:	Unsigned intger to be printed out
* Return:		Prints out integer number
*/
int _print_o(va_list arguments)
{
	unsigned int divisor = 1073741824; /* 8 ^ 10 */
	unsigned int number[11];
	unsigned int index, num_elements; 
	int count;
	unsigned int num = va_arg(arguments, unsigned int);

	number[0] = num / divisor;

	for (index = 1; index < 11; index++)
	{
		divisor /= 8;
		number[index] = (num / divisor) % 8;
	}

	for (index = 0, num_elements = 0; index < 11; index++)
	{
		num_elements += number[index];

		if (num_elements || index == 10)
		{
			_putchar(number[index] + '0');
			count++;
		}
	}

	return (count);
}
