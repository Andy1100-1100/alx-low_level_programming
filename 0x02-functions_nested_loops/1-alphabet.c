#include "main.h"

/**
 * print_alphabet - This is the function of the task
 * Return: return 0
 */

void print_alphabet(void);
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
       	{
		putchar(c);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();

	return (0);
}
