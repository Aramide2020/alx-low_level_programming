#include "main.h"

/**
 * reset_to_98 - resets value of pointer to 98
 * @n: pointer to reset to 98
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	 int n;

	 n = 402;

	 printf("n=%d\n", n);

 	 reset_to_98(&n);

	 printf("n=%d\n", n);

	 return (0);

)
