#include "search_algos.h"

/**
 * print_array - Prints an array between two boundaries
 * @array: pointer to the first element of the array to print
 * @min: left boundary
 * @max: right boundary
 *
 * Return: No Return
 */
void print_array(int *array, int min, int max)
{
	int a;

	for (a = min; a < max; a++)
		printf("%d, ", array[a]);

	printf("%d\n", array[a]);
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Return: Index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int min, max, midle;

	if (!array)
		return (-1);

	min = 0, max = size - 1;
	while (min <= max)
	{
		printf("Searching in array: ");
		print_array(array, min, max);
		midle = (min + max) / 2;
		if (array[midle] == value)
			return (midle);
		if (array[midle] < value)
			min = midle + 1;
		else
			max = midle - 1;
	}

	return (-1);
}

