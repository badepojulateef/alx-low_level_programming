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
	size_t l;
	size_t r;
	size_t tmp;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r && value >= array[l] && value <= array[r])
	{
		tmp = (((r - l) / (array[r] - array[l])) * (value - array[l]));
		pos = l + tmp;
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			l = pos + 1;
		else
			r = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
