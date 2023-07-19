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
		if (x == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}
