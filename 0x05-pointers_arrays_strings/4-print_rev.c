#include "main.h"
/**
  * print_rev - function that prints a string, in reverse, followed by a new line
  * @s: A pointer to an int that will be changed 
  * 
  * Return: void which means our answer is correct
  */

void print_rev(char *s)

{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; 1 >= 0; i--)
	{
		_putchar (s[i]);
	}

	_putchar ('\n');
}
