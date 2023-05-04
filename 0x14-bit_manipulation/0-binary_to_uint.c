#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @c: pointer to binary number
 *
 * Return: the converted number or NULL if function fails
 */
unsigned int binary_to_uint(const char *c)
{
	unsigned int decimal = 0, base = 1;
	int a;

	if (c == NULL)
		return (0);

	for (a = 0; c[a];)
		a++;

	for (a -= a; a >= 0; a--) /* search for null 0 or 1 characters*/
	{
		if (isdigit(c[a]) == 0)
		{
			return (0);
		}
		decimal += (c[a] - '0') * base;
		base *= 2;
	}
	return (decimal);
}
