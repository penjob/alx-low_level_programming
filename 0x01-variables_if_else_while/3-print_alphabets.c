#include <stdio.h>
/**
 *main - main print alpha
 *Return: always 0
 */
int main(void)
{
	int n = 97, b = 65;

	while (n <= 122)

{
	putchar(n);
	n++;
}
while (b <= 90)
{
	putchar(b);
	b++;
}
putchar('\n');
return (0);
}
