#include <stdio.h>
/**
 * main - prints all single digit number of base 10,
 * from 0 followed by a new line
 *
 * Return: Always 0
 */
int main(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
		putchar('\n');

	return (0);
}
