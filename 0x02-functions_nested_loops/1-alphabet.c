#include "main.h"
/**
 *print_alphabet - Print alphabet in lowercase using only `_putchar`
 *Return: always 0
 */
void print_alphabet(void)
{
	int x = 97;

	while (x <= 122)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
