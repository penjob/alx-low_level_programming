#include "main.h"
/**
 *_isupper - uppercase
 *@c: the character to be checked as an integer
 *Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
