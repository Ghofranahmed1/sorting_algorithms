#include "sort.h"

/**
 * selection_sort - sorts an array of integers using a selction sort
 * algorithm
 * @array: array of integers to be sorted
 * @size: size of  array
 */
void selection_sort(int *array, size_t size)
{
	int i, j, min, temp, n = (int)size;

	if (!array || size < 2)
		return;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
