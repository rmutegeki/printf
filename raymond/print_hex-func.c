#include "main.h"

/**
* _print_hex -	prints an unsigned int in hexidecimeal form
* @num:			the number to be printed
* @flag:		To determine case of the printing (0 = lowercase
*				1 = uppercase
*/

int _print_hex(unsigned int num, unsigned int flag)
{
	unsigned int divisor = 268435456; /* 16 ^ 7 */
	unsigned int number[8];
	unsigned int index, num_elements;
	int count;
	
	if (c)
	{
		
	}
	number[0] = num / divisor;
	
	for (index = 1; index < 8; index++)
	{
		num /= 16;
		number[index] = (num / divisor) % 16;
	}
	
	for (index = 0; num_elements = 0; count = 0; index < 8; index++)
	{
		num_elements += number[index];

		if (num_element || index == 7)
		{
			if (number[index] < 10)
				_putchar('0' + number[index]);
			else
				_putchar('0' + diff + number[index]);
			count++;
		}
	}
	return (count);
}
