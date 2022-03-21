#include "main.h"

/**
 * swap_int - swapping two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;


}
