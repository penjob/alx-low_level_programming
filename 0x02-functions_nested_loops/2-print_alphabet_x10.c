#include "main.h"
/**
 *print_alphabet_x10 - Print alphabet in lowercase using only `_putchar' x10
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int x = 97;
	int y = 1;

	while (x <= 122)
	{
		while (y <= 10)
		{
			_putchar(x);
			x++;
			y++;
		}
		_putchar('\n');
}
