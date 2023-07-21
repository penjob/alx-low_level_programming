#include "main.h"
/**
 *print_square - prints a square
 *@size: size of square
 */
void print_square(int size)
{
	int x = 0;
	int y;

	if (x >= size)
	{
		_putchar('\n');
	}

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
