#include "main.h"
/**
 * _strspn - Get the lenght of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containg characters to match.
 * Return: The number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;

		for (int i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;

				break;
			}
		}
		if (found)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (count);
}
