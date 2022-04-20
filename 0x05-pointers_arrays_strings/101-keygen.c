#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *
  */

int main(void)
{
	int num;
	srand(time(NULL));
	num = rand();
	printf("%i\n",num);
	return (0);
}
