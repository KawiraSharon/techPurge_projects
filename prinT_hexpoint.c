#include "main.h"

/**
 * print_hexpoint - Prints a hexadecimal
 * @par: Function argument
 * Return: Pacer
 */

int print_hexpoint(va_list par)
{
	void *hp;
	char *hs = "(nil)";
	long int ha;
	int hb;
	int hi;

	hp = va_arg(par, void*);
	if (hp == NULL)
	{
		for (hi = 0; hs[hi] != '\0'; hi++)
		{
			_putchar(hs[hi]);
		}
		return (hi);
	}

	ha = (unsigned long int)hp;
	_putchar('0');
	_putchar('x');
	hb = print_hexhex(ha);
	return (hb + 2);
}
