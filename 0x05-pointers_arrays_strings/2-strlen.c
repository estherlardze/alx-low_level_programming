#include "main.h"
/**
 * _strlen -prints lenght of string
 * @s: pointer to the string to check
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);


}
