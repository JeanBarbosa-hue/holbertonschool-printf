#include "main.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
int print_letter(int let)
{
	putchar(let);
	return (1);
}

int print_string(char *b)
{
	int loop;
	int str;

	for(loop = 0; b[loop] != '\0'; loop++)
	{
	str += putchar(b[loop]);
	}

	return (str);
}

int print_percentage(void)
{
	putchar('%');
	return(1);
}
