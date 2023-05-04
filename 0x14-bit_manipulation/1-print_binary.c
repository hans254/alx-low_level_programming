#include "main.h"
/**
 * print_binary - print binary representation on a number
 * @v: integer
 *
 * Return: nothing
 */
void print_binary(unsigned long int v)
{
	unsigned long int bn;

	if (v > 1)
	print_binary(v >> 1);
	bn = v & 1;
	_putchar(bn + '0');
}
