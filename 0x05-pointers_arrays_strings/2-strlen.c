#include "main.h"
/**
 *_strlen - string lenght
 *@s: string
 *Return: value i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
