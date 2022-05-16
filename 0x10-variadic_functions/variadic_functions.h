#ifndef _VARIADIC_H_
#define _VARIADIC_H_

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int TIO
void print_all(const char * const format, ...);

#include<stdarg.h>

/**
 * struct print - function that prints multiple choice
 * @x: char Type of print
 * @T_func: function
 */

typedef struct print

{
char *x;
void (*T_func)(va_list);
} t_print;

#endif
