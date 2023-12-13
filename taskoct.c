#include "main.h"

/**
 * octal_value - Outputs the octal representation
 * @o_list: Variable arguments
 * Return: characters printed to console
 */

int octal_value(va_list o_list)
{
	unsigned int o_char;
	int o_len;
	char *ptrO;
	char *ptrOstr;

	o_char = va_arg(o_list, unsigned int);

	if (o_char == 0)
		return (_putchar('0'));

	if (o_char < 1)
		return (-1);

	o_len = base_count(o_char, 8);

	ptrO = malloc(sizeof(char) * o_len + 1);
	if (ptrO == NULL)
		return (-1);

	for (o_len = 0; o_char > 0; o_len++)
	{
		ptrO[o_len] = (o_char % 8) + 48;
		o_char = o_char / 8;
	}

	ptrO[o_len] = '\0';

	ptrOstr = put_base(ptrO);
	if (ptrOstr == NULL)
		return (-1);

	free(ptrO);
	free(ptrOstr);

	return (o_len);
}
