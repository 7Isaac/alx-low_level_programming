#include "main.h"

/**
 * _isdigit - check if a char is a digit
 * @c: int to be checked
 * Return: Always 1 if c is s digit, 0 otherwise
 */
int _isdigit(int c)
{
int y = 0;

if (c >= '0' && c <= '9')
	y = 1;
return (y);
}
