#include "main.h"
/**
 *swap_int - swap
 *@a: value
 *@b: value 1
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
