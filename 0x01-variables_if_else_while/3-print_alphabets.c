#include <stdio.h>
/**
 * main - prints lowercase and uppercase alphabet
 *
 * Renturn: Always 0
 */
int main(void)

{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putar('\n');

	return (0);
	/* Return 0 to indicate success*/
}
