#include "main.h"
/**
 * isalpha - check if a number is lowercase
 * Return: 1 in true
 * 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
