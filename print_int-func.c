#include "main.h"
#include <stdarg.h>

/**
* _print_i -	Function print out intger (i)
* @arguments:	The intger to be printed out
* Return:		Prints out integer number
*/
int _print_i(va_list arguments)
{
	int divisor = 1000000000; /* 10 ^ 9 */
	int number[10];
	int index, num_elements, count;
	int num = va_arg(arguments, int);

	count = 0;
	number[0] = num / divisor;

	for (index = 1; index < 10; index++)
	{
		divisor /= 10;
		number[index] = (num / divisor) % 10;
	}

	if (num < 0)
	{
		_putchar('-');
		number[index] *= -1;
	}

	for (index = 0, num_elements = 0; index < 10; index++)
	{
		num_elements += number[index];

		if (num_elements != 0 || index == 9)
			_putchar(number[index] + '0');
			count++;
	}

	return (0);
}

/**
* _print_d -	Function print out decimal (d)
* @arguments:	The intger to be printed out
* Return:      Prints out integer number
*/
int _print_d(va_list arguments)
{
	int divisor = 1000000000; /* 10 ^ 9 */
	int number[10];
	int index, num_elements, count;
	int num = va_arg(arguments, int);

	number[0] = num / divisor;

	for (index = 1; index < 10; index++)
	{
		divisor /= 10;
		number[index] = (num / divisor) % 10;
	}

	if (num < 0)
	{
		_putchar('-');
		number[index] *= -1;
	}

	for (index = 0, num_elements = 0; index < 10; index++)
	{
		num_elements += number[index];

		if (num_elements != 0 || index == 9)
			_putchar(number[index] + '0');
			count++;
	}

	return (0);
}
