#include "main.h"
/**
 *more_numbers - more numbers
 */
void more_numbers(void)
{
	int x, a;

	for (a = 1; a <= 10; a++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}

