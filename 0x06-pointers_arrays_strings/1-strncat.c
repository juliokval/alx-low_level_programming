#include "main.h"

/**
  * _strncat: function that concatenates two strings
  * @dest: destiation
  * @src: source
  * @n: amount of bytes ued from src
  * Return: the pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if(*(src + count2) == '\0')
			break;
		count++;
		cont2++;
	}
	return (dest);
}
