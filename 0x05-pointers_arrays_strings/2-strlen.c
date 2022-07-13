#include "main.h"

/**
 * _strlen - Returns the length of a string.Converts a string to an integer.
 * @str: string. 
 *
 * Return: Length
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
