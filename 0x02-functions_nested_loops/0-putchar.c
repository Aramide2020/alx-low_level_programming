#include <unistd.h>
#include "main.h"

/**
  * main - Check description
  *Description: it prints the woed _putchar, followed by a new line.
  * Return: 0
  */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[1]);
	_putchar('\n');

		return (0);
}
