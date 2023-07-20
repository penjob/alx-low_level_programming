#include "main.h"
/**
 *print_most_numbers - prints numbers
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
		if (c == 50)
		{
			continue;
		}
	}
	_putchar('\n');
}
