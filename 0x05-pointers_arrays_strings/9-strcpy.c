#include "main.h"
/**
 **_strcpy - copy and past string
 *@dest: first string
 *@src: second string
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}

