#include "main.h"

/**
 *_strcat - Concatenates the string pointed to by @src, including the x
 * null byte, to the end of the string pointed to by @dest.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
