#include "sort.h"
/**
 * partition - function to find sub array from the main array
 * @array: the array
 * @size: size of the array
 * @low: the start position
 * @high: the end position
 * Return: int of the sorted element index
 */
int partition(int *array, int low, int high, size_t size)
{
	int i, j, pivot, temp;

	pivot = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (array[i] != array[j])
				print_array(array, size);
			i++;
		}
	}
	temp = array[i];
	array[i] = array[high];
	array[high] = temp;
	if (array[i] != array[high])
		print_array(array, size);
	return (i);
}

/**
 * quicksort - function call partition function
 * @array: the array
 * @size: size of the array
 * @low: the start position
 * @high: the end position
 * Return: nothing
 */

void quicksort(int *array, int low, int high, size_t size)
{
	int loc;

	if (low < high)
	{
		loc = partition(array, low, high, size);
		quicksort(array, low, loc - 1, size);
		quicksort(array, loc + 1, high, size);
	}
}
/**
 * quick_sort - sort array useing qich sort method
 * @array: the array
 * @size: size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicksort(array, 0, (int)size - 1, size);
}
