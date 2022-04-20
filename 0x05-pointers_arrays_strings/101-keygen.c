#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - program that generates random valid
  * passwords for the program 101-crackme
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	int num;
	srand(time(NULL));
	num = rand();
	printf("%i\n",num);
	return (0);
}
