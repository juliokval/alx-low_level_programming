#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - random password generator for 101-crackme
  *
  * Return: always 0
  */
int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2722 - sum);

	return (0);
}
