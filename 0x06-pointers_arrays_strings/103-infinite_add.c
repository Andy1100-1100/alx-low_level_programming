#include "main.h"
/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the result buffer
 *
 * Return: A pointer to the result if it can be stored in r, otherwise 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum;
	int i = 0, j = 0;

	while (n1[i] != '\0' || n2[j] != '\0' || carry)
	{
	sum = carry;
	if (n1[i] != '\0')
		sum += n1[i] - '0';
	if (n2[j] != '\0')
		sum += n2[j] - '0';

	carry = sum / 10;
	if (i + j < size_r - 1)
		r[i + j] = (sum % 10) + '0';
	else
	return (0);

	if (n1[i] != '\0')
		i++;
	if (n2[j] != '\0')
		j++;
	}

	r[i + j] = '\0';

	return (r);
}

