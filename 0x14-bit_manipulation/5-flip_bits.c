#include "main.h"

/**
 * flip_bits - Counts the number of bits to change from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be changed to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
