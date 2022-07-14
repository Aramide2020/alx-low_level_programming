#include "main.h"
#include <stdio.h>

/**
 * _strcat - This function appends the string
 * @src: overwriting the terminating null byte
 *
 * Return: pointer to the resulting string.
 */

char *_strcat(char *dest, char *src);
{
	 char destination[] = "Hello ";
	 char source[] = "World!";
	 strcat(destination, source)
	 printf("Concatenated String: %s\n", destination);
         return 0;

}
