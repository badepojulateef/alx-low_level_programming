#include "search_algos.h"

int binary_search_recursive(int *array, int value, size_t left, size_t right);
/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_recursive(array, value, 0, size - 1));
}

/**
 * binary_search_recursive - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: array to be searched
 * @value: value to be searched for
 * @left: initial index position
 * @right: final index position
 *
 * Return: int
 */
int binary_search_recursive(int *array, int value, size_t left, size_t right)
{
	size_t mid_idx;
	size_t i;

	if (array == NULL)
		return (-1);
	if (left > right)
		return (-1);

	mid_idx = (left + right) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
	if (value == array[mid_idx])
	{
		return (mid_idx);
	}
	else if (value < array[mid_idx])
	{
		return (binary_search_recursive(array, value, left, mid_idx - 1));
	}
	else
	{
		return (binary_search_recursive(array, value, mid_idx + 1, right));
	}
	return (-1);
}
