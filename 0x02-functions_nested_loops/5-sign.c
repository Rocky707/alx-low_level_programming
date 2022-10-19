#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: num to be printed
 * Return: 1 prints + if n > zero, 0 prints 0 if n = 0, else prints -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
