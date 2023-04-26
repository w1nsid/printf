#include "main.h"

/**
 * print_char - prints a character
 * @list: character to print
 * Return: number of characters printed
 */

int print_char(va_list list)
{
	char c;

	c = (char)va_arg(list, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - prints a string
 * @list: string to print
 * Return: number of characters printed
 */

int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - prints a percent symbol
 * @list: percent symbol to print
 * Return: number of characters printed
 */

int print_percent(va_list list)
{
	(void)list;
	_putchar('%');
	return (1);
}

/**
 * print_number - prints a number
 * @list: number to print
 * Return: number of characters printed
 */

int print_number(va_list list)
{
	int count = 0;
	int n = va_arg(list, int);

	count += display_sign(n);
	return (count);
}
