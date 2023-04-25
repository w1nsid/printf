#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	char *str_arg, ch;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				ch = (char)va_arg(args, int);
				_putchar(ch), printed_chars++;
				break;
			case 's':
				str_arg = va_arg(args, char *);
				if (str_arg == NULL)
					str_arg = "(null)";
				while (*str_arg)
					_putchar(*str_arg), str_arg++, printed_chars++;
				break;
			case '%':
				_putchar('%'), printed_chars++;
				break;
			default:
				return (-1);
			}
		}
		else
			_putchar(*format), printed_chars++;
		format++;
	}
	va_end(args);
	return (printed_chars);
}
