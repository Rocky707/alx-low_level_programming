#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: char to be checked
 * Return: 1 if c is letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
