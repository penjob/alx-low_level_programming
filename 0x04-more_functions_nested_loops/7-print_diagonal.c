#include "main.h"
/**
 *print_diagonal - print diagonal
 *@n: number
 */
void print_diagonal(int n)
{
	int i = 0;
	int a;

	if (i >= n)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (a = 0; a < i; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
