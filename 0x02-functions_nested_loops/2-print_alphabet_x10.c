#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase.
 */
void print_alphabet_x10(void)
{
	int newline = 0;
	char lowerA;

	while (newline <= 9)
	{
		for (lowerA = 'a'; lowerA <= 'z'; lowerA++)
		{
			_putchar(lowerA);
		}
		_putchar('\n');
		newline++;
	}
}
