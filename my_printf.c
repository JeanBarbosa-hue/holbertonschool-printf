#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - custom made printf function
 * @format: pointer
 * Return: total numbers accumalated
 */

int _printf(const char *format, ...)
{
	int idx = 0;
	int res = 0;
	va_list(list);
	va_start(list, format);

	while (format[idx] != '\0')
	{
		if (format[idx] == '%')
		{
			switch(format[idx + 1])
			{
				case 'c':
				{
					res += print_letter(va_arg(list, int));
					break;
				}
				case 's':
				{
					res += print_string(va_arg(list, char *));
					break;
				}
				case 'i': case 'd':
				{
					res += print_integer(va_arg(list, int));
					break;
				}
				case '%':
				{
					res += print_percentage();
					break;
				}
				default:
				{
					res += print_letter(format[idx]);
					res += print_letter(format[idx + 1]);
				}
			}
			idx++;
		}

		else
		{
			res += print_letter(format[idx]);
		}
		idx++;
	}
	va_end(list);
	return(res);
}
