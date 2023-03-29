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

	if (b == NULL)
	{
	return (0);
	}

	else
	{
	for(loop = 0; b[loop] != '\0'; loop++)
	{
	str += putchar(b[loop]);
	}
	}

	return (str);
}

int print_percentage(void)
{
	putchar('%');
	return(1);
}

int print_integer(int num)
{
	char buffer[12];
	int idx;
	int res;
	int is_negative = 0;
	int i;
	int temp;

	if (num < 0)
	{
	is_negative = 1;
	num = -num;
	}

	for (idx = 0; num > 0; idx++)
	{
	buffer[idx] = num % 10 + '0';
	num /= 10;
	}

	if (is_negative)
	{
	buffer[idx++] = '-';
	}

	for (i = 0; i < idx / 2; i++)
	{
	temp = buffer[i];
	buffer[i] = buffer[idx - i - 1];
	buffer[idx - i - 1] = temp;
	}

	res = print_string(buffer);

	return (res);
}
