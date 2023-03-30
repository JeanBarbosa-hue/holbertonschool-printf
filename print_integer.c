#include "main.h"

/**
 *print_int - print number
 *@n: number with the lenght saved
 *Return: the total length of numbers printed
 */

int print_int(int num)
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
