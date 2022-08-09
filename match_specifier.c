#include "main.h"

/**
 * match_specifier - matches specifier function for each conversion specifier
 * @inv: the arguments inventory with most commonly used arguments
 * Return: pointer to the helper function or NULL
 */
void (*match_specifier(inventory_t *inv))(inventory_t *)
{

	int i, j = 0;
	char check = inv->c1;
	static const char modifiers[] = "hl+#";
	static matches_t specifiers_list[] = {
		{'d', p_int}, {'i', p_int}, {'x', p_lowhex}, {'X', p_uphex},
		{'o', p_oct}, {'u', p_ulongint}, {'c', p_char}, {'s', p_string},
		{'%', p_percent}, {'b', p_binary}, {'p', p_pointer},
		{'r', p_rev_string}, {'R', p_rot13}, {'S', p_string_hex}, {'\0', NULL}
	};
	static matches_t modifiers_long[] = {
		{'d', p_longint}, {'i', p_longint}, {'x', p_longlowhex},
		{'X', p_longuphex}, {'o', p_longoct}, {'u', p_ulongint}, {'\0', NULL}
	};

	for (j = 0; modifiers[j] != '\0'; j++)
		if (modifiers[j] == inv->c1)
			inv->flag = 1, check = inv->c2;
	while (TRUE)
	{
		if (specifiers_list[i].ch == '\0')
		{
			if (inv->flag)
				inv->i++;
			return (NULL);
		}
		if (specifiers_list[i].ch == check)
		{
			if (inv->flag)
				inv->i += 2;
			else
				inv->i++;
			if (inv->c1 == 'l')
				return (modifiers_long[i].func);
			return (specifiers_list[i].func);
		}
		i++;
	}
}

/**
 * parse_specifiers - parses characters that follow the % character
 * @inv: the arguments inventory
 */
void parse_specifiers(inventory_t *inv)
{
	int j, i = inv->i + 1, space = 0;
	static const char flags[] = "hl+#";

	inv->space = 0;
	while (inv->fmt[i] == ' ')
		i++, inv->i++, space = 1;

	inv->c1 = inv->fmt[i++];
	if (space && inv->c1 != '+')
	{
		space = 0, inv->space = 1, inv->c0 = ' ';
		write_buffer(inv);
	}
	for (j = 0; flags[j] != '\0'; j++)
	{
		if (inv->c1 == flags[j])
		{
			while (inv->fmt[i] == ' ')
				i++, inv->i++, space = 1;
			if (space && inv->c1 != '+')
			{
				inv->c0 = ' ';
				write_buffer(inv);
			}
			break;
		}
	}
	inv->c2 = inv->c1 ? inv->fmt[i++] : '\0';
	inv->c3 = inv->c2 ? inv->fmt[i] : '\0';
}
