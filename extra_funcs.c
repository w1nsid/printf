#include "main.h"

/**
 * display_sign - prints a number
 * @n: number to print
 * Return: number of characters printed
 */
int display_sign(int n)
{
	int count = 0;
	unsigned int n_buffer;

	if (n < 0)
	{
		_putchar('-');
		n_buffer = n * -1;
		count++;
	}
	else
	{
		n_buffer = n;
	}
	if (n == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	if (n_buffer / 10)
	{
		count += display_sign(n_buffer / 10);
	}
	_putchar(n_buffer % 10 + '0');
	count++;
	return (count);
}

/**
 * display_unsign - prints an unsigned number
 * @n: number to print
 * Return: number of characters printed
 */

int display_unsign(unsigned int n)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	if (n / 10)
	{
		count += display_unsign(n / 10);
	}
	_putchar(n % 10 + '0');
	count++;
	return (count);
}
