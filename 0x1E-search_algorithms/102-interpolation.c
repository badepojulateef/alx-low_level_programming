#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 *
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: int
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t left;
	size_t right;
	size_t tmp;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right && value >= array[left] && value <= array[right])
	{
		tmp = ((
			(right - left) /
			(array[right] - array[left])) * (value - array[left]
		));
		pos = tmp + left;
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		else if (array[pos] < value)
			left = pos + 1;
		else
			right = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
