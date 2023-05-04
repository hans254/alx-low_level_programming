/*
 * Auth: Hansel Fidel Ndemange
 * File: 0-binary_to_uint.c
 */

#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If c is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *c)
{
	unsigned int hans = 0, tas = 1;
	int len;

	if (c == '\0')
		return (0);

	for (len = 0; c[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (c[len] != '0' && c[len] != '1')
			return (0);

		hans += (c[len] - '0') * mult;
		tas *= 2;
	}

	return (num);
}
