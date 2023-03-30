#include "main.h"

/**
 * print_string - print a whole string
 * @c: string that will be passed
 * Return: the length of the string
 */

int print_string(char *c)
{
	int k = 0;

	while (c[k] != '\0')
	{
		_putchar(c[k]);
		k++;
	}
	return (k);
}
