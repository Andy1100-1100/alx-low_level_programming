#include "main.h"

/**
 * print_alphabet - This is the function of the task
 * Return: return 0
 */

void print_alphabet(void);
{
	char c;

	while (letter <= 'z')
       	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();

	return (0);
}
