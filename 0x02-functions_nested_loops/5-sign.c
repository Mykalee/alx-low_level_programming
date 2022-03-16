#include "main.h"
/**
 * print_sign - Determine whether an integer is positive, negative or zero,
 * @n: the number to be checked.
 * Return: 1 if positive, 0 if zero, -1 if negative, / if not a digit.
 */
int print_sign(int r)

{
	if (r > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (r == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (r < 0)
	{	
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return('/');
	}
}
