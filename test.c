#include "printf.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - making printf like function
 *
 * @format: pointer
 *
 * Return: a
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
				case 'i':
				{

				}
				case '%':
				{
					res += print_percentage();
					break;
				}
			}
			default;
			break;
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