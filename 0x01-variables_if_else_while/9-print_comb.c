#include <stdio.h>
/**
 *main - main
 *Return: always 0
 */
int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}
