#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number.
 * @index: The index at which to clear the bit.
 *
 * Return: 1 if the operation is successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
