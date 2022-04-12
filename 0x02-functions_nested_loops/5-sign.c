#include "main.h"

/**
  * print_sign - checks for the sign of a number
  * @n: takes in a number
  * Return: 0 to 1
  */

int print_sign(int n)
{
	int test;
	if (n > 0)
	{
		test = 1;
		_putchar('+')
	}
	else if (n == 0)
	{
		test = 0;
		__putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}

	return (test);
}
