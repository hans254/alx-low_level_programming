/*
 * File: 0-puts_recursion.c
 * Auth: Brennan D Baraban
 */

#include "main.h"
#include "stdio.h"

/**
<<<<<<< HEAD
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

	else
=======
 * _puts_recursion - check the code for Holberton School students.
 * @s: character of string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*(s) == '\0')
>>>>>>> 1ec74dd40c20b4135d645516c09b589f0ca40cdb
		_putchar('\n');
}
