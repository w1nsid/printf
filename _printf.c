#include "main.h"
/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 * Return: number of characters printed (excluding the null
 * byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
				return (-1);
			switch (*format)
			{
			case 'c':
				printed_chars += print_char(args);
				break;
			case 's':
				printed_chars += print_string(args);
				break;
			case '%':
				printed_chars += print_percent(args);
				break;
			case 'd':
			case 'i':
				printed_chars += print_number(args);
				break;
			default:
				_putchar('%'), _putchar(*format), printed_chars += 2, va_arg(args, int);
				break;
			}
		}
		else
			_putchar(*format), printed_chars++;
		format++;
	}
	va_end(args);
	return (printed_chars);
}
