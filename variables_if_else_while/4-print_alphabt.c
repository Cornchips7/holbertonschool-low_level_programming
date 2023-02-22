#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for the ltters q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		/* '&& letter' chains the two commands together*/
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
