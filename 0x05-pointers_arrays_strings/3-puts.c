#include "main.h"
#include <unistd.h>
/**
 *_puts - prints a string
 *@str: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

