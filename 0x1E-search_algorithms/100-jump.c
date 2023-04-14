#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t left;
	size_t right;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	left = 0;
	right = 0;

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
