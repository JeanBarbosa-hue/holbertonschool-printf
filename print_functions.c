#include "main.h"
#include<stdio.h>

int print_letter(char c)
{
	putchar(c);
		return(1);
}

int print_string(char *c)
{
	int k = 0;

	while (c[k] != '\0')
	{
		putchar(c[k]);
		k++;
	}
	return(k);
}

int print_percentage()
{
	putchar('%');
	return(1);
}
