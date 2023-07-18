#include <stdio.h>
/**
 *main - main
 *Return: always 0
 */
int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		--x;
	}
	putchar('\n');
	return (0);
}
