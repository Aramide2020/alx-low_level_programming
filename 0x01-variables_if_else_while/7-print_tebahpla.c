#include <studio>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'Z'; letter >= 'a'; letter--)
		putchar(letter);

			putchar('\n');
	
	return (0);
}
