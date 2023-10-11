#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char lowerA;

	for (lowerA = 'a'; lowerA <= 'z'; lowerA++)
	{
		_putchar(lowerA);
	}
	_putchar('\n');
}
