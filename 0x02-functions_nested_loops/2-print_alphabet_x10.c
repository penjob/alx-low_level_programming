#include "main.h"
/**
 *print_alphabet_x10 - Print alphabet in lowercase using only `_putchar' x10
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	int y = 1;

	while (y <= 10)
	{
		x = 97;
		while (x <= 122)
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
