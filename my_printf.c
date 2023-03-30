#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 *  _printf - custom made printf 
 *  @format: pointer
 *  Return: total number accumalated
 */

int _printf(const char *format, ...)
{
	int idx = 0;
	int result = 0;
	va_list(list);
	va_start(list, format);

	if (format == NULL)
	{
		return(-1);
	}

	else
	{
	while (format[idx] != '\0')
	{
		if (format[idx] == '%')
		{
			switch(format[idx + 1])
			{
				case 'c':
				{
					result += print_char(va_arg(list, int));
					break;
				}
				case 's':
				{
					result += print_string(va_arg(list, char *));
					break;
				}

				case '%':
				{
					result += print_char('%');
					break;
				}
				case 'd':
				case 'i':
				{
					result += print_int(va_arg(list, int));
					break;
				}
				default:
				{
					result += print_char(format[idx]);
					result += print_char(format[idx + 1]);
					break;
				}
			}
			idx++;
		}

		else
		{
			result += print_char(format[idx]);
		}
		idx++;
	}
	}
	va_end(list);
	return(result);
}
