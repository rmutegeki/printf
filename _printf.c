#include "main.h"

/**
 * _printf - behaves as the C function printf()
 * @format: character string of directives, flags, modifiers, and specifiers.
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args_list;
	inventory_t *inv;
	void (*temp_func)(inventory_t *);

	if (!format)
		return (-1);
	va_start(args_list, format);
	inv = build_inventory(&args_list, format);

	while (inv && format[inv->i] && !inv->error)
	{
		inv->c0 = format[inv->i];
		if (inv->c0 != '%')
			write_buffer(inv);
		else
		{
			parse_specifiers(inv);
			temp_func = match_specifier(inv);
			if (temp_func)
				temp_func(inv);
			else if (inv->c1)
			{
				if (inv->flag)
					inv->flag = 0;
				write_buffer(inv);
			}
			else
			{
				if (inv->space)
					inv->buffer[--(inv->buf_index)] = '\0';
				inv->error = 1;
			}
		}
		inv->i++;
	}
	return (end_func(inv));
}
