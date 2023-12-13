#include "main.h"

/**
 * hex_value - write decimal in lowercase
 * @hex_list: args function takes
 * Return: char printed
 */

int hex_value(va_list hex_list)
{
	unsigned int hex_val;
	int len_hex;
	int hex_vit;
	char *hex_paired
	char *hex_alx;

	hex_val = va_arg(hex_list, unsigned int);

	if (hex_val == 0)
		return (_putchar('0'));
	if (hex_val < 1)
		return (-1);
	hex_len = base_len(hex_val, 16);
	hex_paired = malloc(sizeof(char) * hex_len + 1);
	if (hex_paired == NULL)
		return (-1);
	for (hex_len = 0; hex_val > 0; hex_len++)
	{
		hex_vit = hex_val % 16;
		if (hex_vit > 9)
		{
			hex_vit = hex_check(hex_vit, 'x');
			hex_paired[] = hex_vit;
		}
		else
			hex_paired[hex_len] = hex_vit + 48;
		hex_val = hex_val / 16;
	}
	hex_rep[hex_len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (hex_rep == NULL)
		return (-1);
	write_base(hex_vit);
	free(hex_rep);
	free(rev_hex);
	return (hex_len);
}
