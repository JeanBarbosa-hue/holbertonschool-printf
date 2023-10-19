#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - Custom-made printf function.
 * @format: A pointer to the format string.
 *
 * This function simulates the behavior of the standard printf function by
 * parsing a format string and printing formatted output. It supports the
 * following format specifiers: %c, %s, %%, %d, and %i.
 *
 * @format: The format string containing format specifiers.
 *
 * Return: The total number of characters printed.
 */
int _printf(const char *format, ...)
{
	int idx = 0; // Current index in the format string
	int result = 0; // Total number of characters printed
	va_list list; // A list of arguments
	va_start(list, format);

	if (format == NULL)
	{
		return (-1); // Return -1 if format is NULL
	}
	else
	{
		while (format[idx] != '\0')
		{
			if (format[idx] == '%')
			{
				switch (format[idx + 1])
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
	return (result);
}
