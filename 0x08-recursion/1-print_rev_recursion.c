#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - printing a string in reverse form
 * @s: the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
