#include "main.h"

/**
 * _isupper - entry point
 * @c: character to be checked
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	return (0);
}
