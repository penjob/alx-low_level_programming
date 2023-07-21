#include "main.h"
/**
 *print_diagonal - print diagonal
 *@n: number
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int a;

		for (a = 0; a < i; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
